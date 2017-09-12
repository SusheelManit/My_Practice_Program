#include <stdio.h>
#include <stdlib.h>

void print(int **ptr,int row,int col)
{
	int i,j;
	for(i=0;i<row;++i)
	{
		for(j=0;j<col;++j)
		printf("%d",ptr[i][j]);
		printf("\n");
	}
}

int main(int argc,char** argv)
{
	int arr[][3]={{1,2,3},{1,2,3},{1,2,3},{1,2,3}};
	printf("in main\n");
	printf("%p\n",arr);
	printf("%p\n",*arr);
	printf("%d\n",**arr);
	printf("In side other\n");
	print(arr,3,3);
	return 0;
}
