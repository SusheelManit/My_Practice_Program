#include <stdio.h>
#include <stdlib.h>

int main(int argc,char** argv)
{
	if(argc!=2)
	{
		fprintf(stderr,"Please provide <filename>\n");
		exit(1729);
	}
	FILE *fp=fopen(argv[1],"r");
	if(fp==NULL)
	{
		fprintf(stderr,"Unable to openfile\n");
		exit(1729);
	}
	int rollnumber;
	char name[10];
	int return_value;
	return_value=fscanf(fp,"%d %s",&rollnumber,name);
	printf("%d read sucessful\n",return_value);
	printf("Rollnumber=%d\n",rollnumber);
	printf("Name      =%s\n",name);
	fclose(fp);
	return 0;
}
	
