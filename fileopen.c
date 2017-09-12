#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
int main()
{
	int des;
	int ret;
	char c;
	int count=0;
	des=open("sushil1.txt",O_RDONLY);
	if(des==-1)
	{
	perror("Open:");
	_exit(1);
	}
	printf("inode %d=\n",des);
	while(1)
	{
		ret=read(des,&c,1);
		if(ret==0)
		break;
		if(c==EOF)
		{
			count+=ret;
		printf("Wow i'm find EOF\n");
		}
	}
	printf("Read %d bytes.\n",count);
	return 0;
}
