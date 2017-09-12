#include <stdio.h>
#include <stdlib.h>

void print1(int *ptr,int row,int col)
{
	int i,j;
	for(i=0;i<row;++i)
	{
		for(j=0;j<col;++j)
		printf("%d  ",*((ptr+i*col)+j));
		printf("\n");
	}
}

void print2(int **ptr,int row,int col)
{
	int i,j;
	for(i=0;i<row;++i)
	{
		for(j=0;j<col;++j)
		printf("%d  ",ptr[i][j]);
		printf("\n");
	}
}

void print3(int ptr[][3],int row,int col)
{
	int i,j;
	for(i=0;i<row;++i)
	{
		for(j=0;j<col;++j)
		printf("%d  ",ptr[i][j]);
		printf("\n");
	}
}

int main()
{
	int arr[3][3]={{1,2,3},{1,2,3},{1,2,3}};
	printf("Print1 call\n");
	print1((int *)arr,3,3);
	printf("\nPrint2 call\n");
	print2((int *)arr,3,3);
	printf("\nPrint3 call\n");
	print3(arr,3,3);
	printf("\n");
	return 0;
}
	

