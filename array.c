#include <stdio.h>
#include <stdio.h>

int main()
{
	int **matrix;
	int nrows=4,ncols=4;
	matrix=create_matrix(nrows,ncols);
	populate_matrix(matrix,nrows,ncols);
	print_matrix(matrix,nrows,ncols);
	destroy_matrix(matrix,nrows);
	return 0;
}
