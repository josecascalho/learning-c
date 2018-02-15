#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
int main()
{
	int fd = open("diretoria.txt",O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	int saved_stdout = dup(1);
	dup2(fd,1); //set new stdout, copy
	close(fd); //close the old one
	execl("/bin/ls","ls",0); //execute for new stdout
}

