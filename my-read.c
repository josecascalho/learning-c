#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <errno.h>
#include <sys/types.h>
#include <unistd.h>
 
#define BUF_SIZE 8192
 
int main(int argc, char* argv[]) {
 
    int input_fd;    /* Input file descriptors */
    ssize_t ret_in;    /* Number of bytes returned by read() and write() */
    char buffer[BUF_SIZE];      /* Character buffer */
 
    /* Are src file name arguments missing */
    if(argc != 2){
        printf ("Usage: read file");
        return 1;
    }
 
    /* Create input file descriptor */
    input_fd = open (argv [1], O_RDONLY);
    if (input_fd == -1) {
            perror ("open");
            return 2;
    }
 
 
    /* Copy process */
    while((ret_in = read (input_fd, &buffer, BUF_SIZE)) > 0){
        printf("Buffer: %s", buffer);  
	
    }
 
    /* Close file descriptors */
 close (input_fd);
}
