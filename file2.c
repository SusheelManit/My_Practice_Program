#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
int main(int argc,char** argv)
{
	FILE *f=fopen("simple.txt","a");
	if(f==NULL)
	{
		fprintf(stderr,"Unbale to open file with errno %d",errno);
		exit(255);
	}
	int a=0,b=0,c=0,return_value=0;
	return_value=fscanf(f,"%d %d %d",&a,&b,&c);
	printf("fscanf return %d\n",return_value);
	printf("a=%d b=%d c=%d\n",a,b,c);
	return 0;
}
