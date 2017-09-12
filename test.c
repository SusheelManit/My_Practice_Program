#include <stdio.h>
#include <stdlib.h>
void print(int (*arr)[3],int row,int col)
{
	int i,j;
	printf("sizeof (*arr)[3]=%lu\n",sizeof(arr));
	for(i=0;i<row;++i)
	{
		for(j=0;j<col;++j)
		printf("%d ",arr[i][j]);
		printf("\n");
	}
}
int main()
{
	int arr[][3]={1,2,3,4,5,6,9};
	print(arr,3,3);
	return 0;
}
