#include <stdio.h>
#include <stdlib.h>

int main()
{
	void *ptr=main;
	unsigned char *ins=(unsigned char *)ptr;
	while(1)
	{
		printf("0x%x  ",*ins);
		--ins;
	}
	return 0;
}
