#include <stdio.h>
#include <stdlib.h>

int main()
{
	int arr1[]={1,2,3};
	int arr2[]={4,5,6};
	int arr3[]={7,8,9};
	int *arr[]={arr1,arr2,arr3};
	int arry[3][3];
	int (*arrx)[3]=arry;
	printf("%p  %p  %p  %p\n",arr,&arr,arr1,arr[0]);
	return 0;
}
