#include <stdio.h>
#include <stdlib.h>

int main()
{
	int **ptr;
	int row,col,i,j;
	printf("Enter number of row\n");
	scanf("%d",&row);
	ptr=(int **)malloc(sizeof(int *)*row);
	printf("Enter coloumn of matrix\n");
	scanf("%d",&col);
	for(i=0;i<row;++i)
	{
		ptr[i]=(int *)malloc(sizeof(int)*col);
	}
	///matrix is form
	for(i=0;i<row;++i)
	for(j=0;j<col;++j)
	ptr[i][j]=random()%197;

	printf("Matrix is...\n");
	for(i=0;i<row;++i)
	{
		for(j=0;j<col;++j)
		{
			printf("%d  ",ptr[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<row;++i)
	{
		free(ptr[i]);
	}
		free(ptr);
		return 0;
}
