#include <stdio.h>
#include <stdlib.h>


int main()
{
	printf("char=%lu\n",sizeof(char*));
	printf("short int =%lu\n",sizeof(short));
	printf("int =%lu\n",sizeof(int));
	printf("unsigned int=%lu\n",sizeof(unsigned int));
	printf("long int =%lu\n",sizeof(long unsigned int));
	printf("pointer =%lu\n",sizeof(int *));
	return 0;
}
	
