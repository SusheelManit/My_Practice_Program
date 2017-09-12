#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
int isEof(char *str)
{
	int ch,return_value;
	FILE *f=NULL;
	f=fopen(str,"r");
	int fd=fileno(f);
	while(1)
	{
		return_value=read(fd,&ch,1);
		if(return_value==0)
			break;
		if(ch==EOF)
		{
			printf("EOf found\n");
			return 1;
		}
	}
	printf("Always remeber EOF does not exit\n");
	fclose(f);
	return 0;
}


int main(int argc,char** argv)
{
	if(argc!=2)
	{
		fprintf(stderr,"Please provide <filename>\n");
		exit(EXIT_FAILURE);
	}
	FILE *f=NULL;
	f=fopen(argv[1],"w");
	if(f==NULL)
	{
		fprintf(stderr,"Unable to open %s file with errno %d",argv[1],errno);
		exit(255);
	}
	fprintf(f,"Hello File world");
	fclose(f);
	isEof(argv[1]);
	return 0;
}
		
