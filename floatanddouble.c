#include <stdio.h>
#include <stdlib.h>

void printfloatbit(float f)
{
	unsigned  long value=*(unsigned  long *)&f;
	for(int i=31;i>=0;--i)
	{
		printf("%lu ",(value>>i)&1);
	
	}
	printf("\n");
}
void printdouble(double f)
{
	unsigned long long value=*(unsigned long long *)&f;
	for(int i=63;i>=0;--i)
	{
		printf("%llu ",(value>>i)&1);
	}
	printf("\n");
}
int main()
{
	float f=3.5;
	float f2=3.1;
	double dl=3.1;
	printf("if(f==3.5)\n");
	printfloatbit(f);
	printdouble(3.5);
	printf("if(f==3.1)\n");
	printfloatbit(f2);
	printdouble(3.1);
	return 0;
}

