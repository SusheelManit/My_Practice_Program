#include <stdio.h>
#include <stdlib.h>

int main(int argc,char* argv[])
{
	int n,arr[100],i,key,returnStatus;
	if(argc!=2)
	{
		fprintf(stderr,"Provide size in run time\n");
		exit(0);
	}
	returnStatus=sscanf(argv[1],"%d",&n);
	if(!returnStatus)
	{
		fprintf(stderr,"Unable to read input\n");
		exit(255);
	}
	for(i=0;i<n;++i)
	arr[i]=random();
	printf("Array Element is ..\n");
	for(i=0;i<n;++i)
	printf("%d\t",arr[i]);
	printf("\nEnter Element to be search\n");
	scanf("%d",&key);
	i=0;
	while(i<n && key!=arr[i++]);
	if(i<n)
	printf("%d found at %d position\n",key,(i+1));
	else
	printf("%d not found\n",key);
	return 0;
}
