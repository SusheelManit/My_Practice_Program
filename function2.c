#include <stdio.h>
#include <stdlib.h>



int add(int a,int b)
{
	return a+b;
}

int sub(int a,int b)
{
	return a-b;
}

int mul(int a,int b)
{
	return a+b;
}

void mathoperation(int *a,int *b,int len,int (*func)(int,int))
{
	int i;
	for(i=0;i<len;++i)
	printf("%d %d\n",i,func(a[i],b[i]));
}

int main()
{
	int a[]={1,2,3,4,5,6};
	int b[]={1,2,3,4,5,6};
	mathoperation(a,b,6,add);
	printf("sub:\n");
	mathoperation(a,b,6,sub);
	return 0;
}
