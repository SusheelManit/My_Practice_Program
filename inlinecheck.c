#include <stdio.h>
int a,b;
int main()
{
	scanf("%d %d",&a,&b);
	asm("movl a,%eax");
	asm("cmp b,%eax");
	asm("jl Ti");
	printf("%d is greater",b);
	asm("Ti:");
	printf("%d is lesser",a);
	return 0;
}
