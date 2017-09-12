#include <stdio.h>
#include <stdlib.h>

int add(int a,int b)
{
	return a+b;
}

int main()
{
	int (*helper)(int,int);
	int ans,ans1;
	helper=add;
	ans=helper(3,4);
	ans1=(*helper)(3,4);
	if(ans==ans1)
	printf("same\n");
	return 0;
}
