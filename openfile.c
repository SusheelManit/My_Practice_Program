#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc,char **argv)
{
	int fd=open(argv[1],O_RDONLY);
	if(fd<0)
	perror("Open:");
	close(fd);
	printf("File closed Sucessfuly\n");
	return 0;
}
