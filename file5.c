#include <stdio.h>
#include <stdlib.h>

int main(int argc,char** argv)
{
	int ch;
	FILE *fp=fopen(argv[1],"r");
	if(fp==NULL)
	{
		fprintf(stderr,"Unable to given file\n");
		exit(255);
	}
	while((ch=getc(fp))!=EOF)
	putchar(ch);
	fclose(fp);
	return 0;
}
