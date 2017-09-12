#include <stdio.h>
#include <stdlib.h>

int main(int argc,char** argv)
{
	if(argc!=2)
	{
		fprintf(stderr,"Please provide <filename>\n");
		exit(1);
	}
	FILE *fp=fopen(argv[1],"w");
	int ch;
	if(fp==NULL)
	{
		fprintf(stderr,"Unable to open file\n");
		exit(1);
	}
	printf("Enter ctrl+D for exit \n");
	while((ch=getchar())!=EOF)
	putc(ch,fp);
	close(fp);
	return 0;
}
