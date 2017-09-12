#include <stdio.h>
#include <stdlib.h>

int main(int argc,char** argv)
{
	int arr1[4]={1,2,3,4};
	int arr2[4]={5,6,7,8};
	int arr3[4]={1,2,3,4};
	int arr4[4]={5,6,7,8};
	int i,j;
	int *arr[4]={arr1,arr2,arr3,arr4};
	printf("Printing of array element\n");
	for(i=0;i<4;++i)
	{
		for(j=0;j<4;++j)
		printf("%d ",*(*(arr+i)+j));
		printf("\n");
	}
	return 0;
}
