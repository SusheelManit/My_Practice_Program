#include <stdio.h>
#include <stdlib.h>

#define BABA 123
#define DADA 124
#define doit(name) ptr(#name,name)
void ptr(char *,int);
int main()
{
	doit(BABA);
	doit (DADA);
	return 0;
}

void ptr(char *name,int value)
{
	printf("%s  %d\n",name,value);
}

