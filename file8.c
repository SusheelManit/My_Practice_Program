#include <stdio.h>
#include <stdlib.h>

int main(int argc,char **argv)
{
	if(argc!=2)
	{
		fprintf(stderr,"Please provide <filename>\n");
		exit(255);
	}
	int number;
	FILE *fp=fopen(argv[1],"w");
	if(fp==NULL)
	{
		fprintf(stderr,"Unable to open file\n");
		exit(255);
	}
	do
	{
		scanf("%d",&number);
		if(number==EOF)
		break;
		putw(number,fp);
	}while(1);
	fclose(fp);
	return 0;
}
