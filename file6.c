#include <stdio.h>
#include <stdlib.h>

int main(int argc,char** argv)
{
	if(argc!=2)
	{
		fprintf(stderr,"Please provide filename\n");
		exit(255);
	}
	char arr[]="hello bhosadi wale\n";
	FILE *fp = fopen(argv[1],"w");
	if(fp==NULL)
	{
		fprintf(stderr,"Unable to open file\n");
		exit(255);
	}
	int return_value=fputs(arr,fp);
	printf("%d value write sucessful\n",return_value);
	fclose(fp);
	return 0;
}
