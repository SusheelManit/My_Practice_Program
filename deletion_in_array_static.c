#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define MAX 500
int main()
{
	int arr[MAX],n,i,index;
	printf("Enter sizeof array\n");
	scanf("%d",&n);
	srandom(getpid());
	for(i=0;i<MAX;++i)
	arr[i]=random();
	printf("Array is ...\n");
	for(i=0;i<n;++i)
	printf("%d\t",arr[i]);
	///input user to index from deletion
	printf("Enter index {0-(n-1)}\n");
	scanf("%d",&index);
	while(index<n-1)
	{
		arr[index]=arr[index+1];
		index++;
	}
	printf("Deletion Successful .....\n");
	for(i=0;i<n;i++)
	printf("%d\t",arr[i]);
	return 0;
}
