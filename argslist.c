#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
int sum(int number,...)
{
	int total=0;
	va_list va;
	va_start(va,number);
	for(int i=0;i<number;++i)
	{
		total+=va_arg(va,int);
	}
	printf("Sum=%d\n",total);
	va_end(va);
	return total;
}

int main()
{
	int total=sum(5,2,3,4,5,6);
	return 0;
}
