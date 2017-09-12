#include <stdio.h>

int main()
{
	int a=12;
	char c=(char)a%10;
	printf("char c=%c\n",'0'+c);
	printf("int c=%d\n",c);
	return 0;
}
