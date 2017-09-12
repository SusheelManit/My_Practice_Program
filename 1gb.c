#include <stdio.h>
#include <stdlib.h>

#define ONE_MB 1024*1024

char a[2048*ONE_MB-1];

int main()
{
	printf("%u\n",(unsigned int)getpid());
	getchar();
	memset(a,'a',sizeof(a));
	getchar();
	return 0;
}
