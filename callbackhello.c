#include <stdio.h>

void myfun()
{
	printf("Hello  World\n");
}

int main()
{
	void  (*ptr)();
	ptr=myfun;
	(*ptr)();
	ptr();
	return 0;
}
