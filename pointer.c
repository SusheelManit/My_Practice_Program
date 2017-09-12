#include <stdio.h>
#include <stdlib.h>

void show_bits(double  value)
{
	unsigned long long rc=*(unsigned long long *)&value;
	for( int i=63;i>=0;--i)
	printf("%llu ",(rc>>i)&1);
	printf("\n");
}

int main()
{
	char *ptr=0;
	float a=3.1;
	show_bits(a);
	show_bits(3.1);
	printf("\n");
	return 0;
}
