#include <stdio.h>
#include <stdlib.h>

int main()
{
	int p,a;
	p=&a;
	printf("%lu\n",sizeof(char *));
	printf("%d",*p);
	return 0;
}

