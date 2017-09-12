#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n,index,i;
	int *arr;
	printf("Enter size of array\n");
	scanf("%d",&n);
	arr=(int *)malloc(sizeof(int)*n);
	if(!arr)
	{
		fprintf(stderr,"Unable to allocate memory\n");
		exit(255);
	}
	srandom(getpid());
	for(i=0;i<n;++i)
	arr[i]=random();
	printf("Array is ...\n");
	for(i=0;i<n;++i)
	printf("%d\t",arr[i]);
	//delete element
	printf("Enter index to delete {0-(n-1)}\n");
	scanf("%d",&index);
	while(index<(n-1))
	{
		arr[index]=arr[index+1];
		index++;
	}
	//perform reallocation
	arr=(int *)realloc(arr,sizeof(int)*(n-1));
	printf("After Deleting ...\n");
	for(i=0;i<n-1;++i)
	printf("%d\t",arr[i]);
	return 0;
}
	
	
