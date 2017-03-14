#include <stdio.h>
#include <stdlib.h>

int **create_matrix(int nrows,int ncols)
{
	int **matrix=malloc(nrows*sizeof(int *));
	if(matrix==NULL)
	{
		fprintf(stderr,"Unable to cretae matrix\n");
		exit(1);
	}
	for(int i=0;i<ncols;++i)
	matrix[i]=malloc(sizeof(int)*ncols);
	return matrix;
}

void print_matrix(int **matrix,int nrows,int ncols)
{
	int i,j;
	for(i=0;i<nrows;++i)
	{
		for(j=0;j<ncols;++j)
		printf("[%d][%d] %.2d ",i,j,matrix[i][j]);
		printf("\n");
	}
}

void destroy_matrix(int **matrix,int nrows)
{
	int i;
	for(i=0;i<nrows;++i)
	free(matrix[i]);
	free(matrix);
}

void populate_matrix(int **matrix,int nrows,int ncols)
{
	int i,j;
	for(i=0;i<nrows;++i)
	{
		for(j=0;j<ncols;++j)
		matrix[i][j]=i*j;
	}
}

