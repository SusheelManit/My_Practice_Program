#include <stdio.h>

int main()
{
	const int x=12;
	int *ptr=&x;
	*ptr=44;
	printf("%d",x);
	printf("\n");
	return 0;
}
