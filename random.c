#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
int main()
{
	int rfd,len=0;
	char data[50];
	rfd=open("/dev/random",O_RDONLY);
	if(rfd==-1)
	{
		perror("open:");
		exit(1);
	}
		read(rfd,data,50);
	close(rfd);
	data[50]='\0';
	printf("%s\n",data);
	printf("\n");
	return 0;
}
