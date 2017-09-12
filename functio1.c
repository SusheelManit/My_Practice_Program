#include <stdio.h>
#include <stdlib.h>

int add(int a,int b)
{
	return a+b;
}

int main()
{
	typedef int (*plus_func)(int,int);
	plus_func plus=add;
	printf("add(4,5)=%d\n",add(4,5));
	printf("plus(6,5)=%d\n",plus(6,5));
	return 0;
}
