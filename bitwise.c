#include <stdio.h>

void showBits(unsigned int x)
{
	int i;
	for(i=31;i>=0;--i)
	printf("%d ",(x>>i)&1);
	printf("\n");
}

int main()
{
	unsigned int a;
	showBits(8);
	showBits(2783);
	showBits(1552);
	a=orPerform();
	showBits(a);
	printf("Original Value %u\n",a);
	printf("=======================\n");
	showBits(2783);
	showBits(1552);
	a=xorPerform();
	showBits(a);
	printf("Original Value %u\n",a);
	printf("=======================\n");
	showBits(129);
	a=notPerform();
	showBits(a);
	printf("Original Value %u\n",a);
	printf("=======================\n");
	showBits(2783);
	showBits(1552);
	a=xoragain();
	showBits(a);
	printf("Original Value %u",a);
	return 0;
}

	
