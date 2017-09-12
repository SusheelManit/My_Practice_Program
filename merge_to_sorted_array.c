#include <stdio.h>
#include <stdlib.h>

#define MAX 500

int main(int argc,char* argv[])
{
	int n1,n2,i,j,k,arr1[MAX],arr2[MAX],result[2*MAX];
	if(argc!=3)
	{
		fprintf(stderr,"Provide two integer for array size\n");
		exit(1729);
	}
	n1=atoi(argv[1]);
	n2=atoi(argv[2]);
	for(i=0;i<n1;++i)
	arr1[i]=random();
	for(j=0;j<n2;++j)
	arr2[j]=random();
	k=i=j=0;
	while(i<n1 && j<n2)
	{
		if(arr1[i]<arr2[j])
		result[k++]=arr1[i++];
		else
		result[k++]=arr2[j++];
	}
	while(i<n1)
	result[k++]=arr1[i++];
	while(j<n2)
	result[k++]=arr2[j++];
	printf("Result is ...\n");
	for(i=0;i<k;++i)
	printf("%d\t",result[i]);
	printf("\n");
	return 0;
}

		

