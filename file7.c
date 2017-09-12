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
		exit(255);
	}
	char *ptr=malloc(40);
	int return_value;
	ptr=fgets(ptr,40,fp);
	printf("%s\n",ptr);
	free(ptr);
	fclose(fp);
	return 0;
}
