#include "mem.h"

void cria_memoria_partilhada()
{
//shm_open(name, oflags, mode) //cria e abre objeto e memória partilhada de tamanho zero (share memory open)
//Queremos criar e ler e escrever
//Permissões de leitura e escrita
  int fd;
  fd = shm_open("/mem_part",O_RDWR | O_CREAT, S_IRUSR | S_IWUSR );
  if (fd == -1)
  {
    perror("shm_open");
    exit(1);
  }
  int ret;
  ret = ftruncate(fd,sizeof(int)); //cria espaço, neste caso espaço de um inteiro 
  if (ret == -1)
  {
    perror("ftruncate");
    exit(2);
  }
  
  //mmap:cria secção de memória partilhada. O sistema operativo decido aonde com NULL. 
  // A proteção? Ler e escrever na memória
  //Flags: memória partilhada
  //Offset = 0 começamos no início da memória
  partilha = mmap(NULL,sizeof(int), PROT_READ | PROT_WRITE,MAP_SHARED,fd,0);
   
  if (partilha == MAP_FAILED)
  {
    perror("mmap");
    exit(3);
  }
  
}
void destroi_memoria_partilhada()
{
 int ret;
 ret = munmap(partilha, sizeof(int));
 if (ret == -1)
 {
   perror("munmap");
    exit(1);
 
 } 
 ret = shm_unlink("/mem_part");
 if (ret == -1)
 {
   perror("shm_unlink");
   exit(2);
 }
}
