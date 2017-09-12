#include <stdio.h>
#include <stdlib.h>

int main(int argc,char** argv)
{
	if(argc!=2)
	{
		fprintf(stderr,"Please provide <filename>\n");
		exit(255);
	}
	FILE *fp=fopen(argv[1],"r");
	if(fp==NULL)
	{
		fprintf(stderr,"Unable to open file\n");
		exit(1729);
	}
	int number;
	while((number=getw(fp))!=EOF)
	printf("%d\n",number);
	fclose(fp);
	return 0;
}
