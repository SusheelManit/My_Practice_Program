#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
void printBits(unsigned int x)
{
	int i;
	xy:
	for(i=31;i>=0;--i)
	printf("%d  ",(x>>i)&1);
	printf("\n");
}
int performOr();

int main()
{
	int a;
	printBits(1753);
	printBits(1552);
	a=performOr();
	printBits(a);
	printf("%d",a);
	printf("\n");
	return 0;
}
