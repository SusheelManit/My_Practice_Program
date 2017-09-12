#include <stdio.h>
#include <stdlib.h>

int main(int argc,char** argv)
{
	if(argc!=2)
	{
		fprintf(stderr,"Please provide <filenmae>\n");
		exit(1729);
	}
	int rollnumber,return_value;
	char name[10];
	FILE *fp=fopen(argv[1],"wb");
	if(fp==NULL)
	{
		fprintf(stderr,"Unable to open file\n");
		exit(1729);
	}
	printf("Enter roll number and name of student\n");
	scanf("%d %s",&rollnumber,name);
	return_value=fprintf(fp,"%d %s",rollnumber,name);
	printf("%d item witen sucessfuly\n",return_value);
	fclose(fp);
	return 0;
}
	
