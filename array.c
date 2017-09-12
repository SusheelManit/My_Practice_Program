#include <stdio.h>
<<<<<<< HEAD
#include <stdlib.h>

struct stu
{
	int age;
	char name;
};
int main()
{
	struct stu str;
	char arr[]="hello";
	printf("%d \n",str.age);
=======
#include <stdio.h>

int main()
{
	int **matrix;
	int nrows=4,ncols=4;
	matrix=create_matrix(nrows,ncols);
	populate_matrix(matrix,nrows,ncols);
	print_matrix(matrix,nrows,ncols);
	destroy_matrix(matrix,nrows);
>>>>>>> 5e41defdc796fbbb2a79c5e71e0632324880b01b
	return 0;
}
