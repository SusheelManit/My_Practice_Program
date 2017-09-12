#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
int main(int argc,char* argv[])
{
	if(argc!=2)
	{
		fprintf(stderr,"please provide file name\n");
		exit(1);
	}
	int fd=open(argv[1],O_RDONLY);  //if we create file with O_CREAT then permission bit required
	if(fd<0)
	{
		perror("open");
	}
	printf("%s file open succesfully for reading with file discripter %d",argv[1],fd);
	printf("\n");
	return 0;
}
