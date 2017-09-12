#include <stdio.h>


int main()
{
	int a=12;
	void *ptr=&a;
	printf("Address of a=%p\n",ptr);

	ptr++;
	printf("Address of ptr=%p\n",ptr);
	return 0;
}
