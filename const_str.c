#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *str="Hello";
	printf("address of \"Hello\"%15p\n",str);
	printf("address of main %15p\n",main);
	return 0;
}
