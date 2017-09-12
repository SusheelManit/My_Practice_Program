#include <stdio.h>
#include <stdlib.h>

int main(int argc,char** argv)
{
	int arr[][3]={1,2,3,1,2,1};
	int i,j;
	printf("Ways of print base address\n");
	printf("%p\n",arr);
	printf("%p\n",arr[0]);
	printf("%p\n",*arr);
	printf("%p\n",&arr[0][0]);
	printf("%p\n",&arr);
	printf("%p\n",*(arr+0));
	printf("%p\n",&*(*(arr+0)+0));
	printf("Ways of print base value\n");
	printf("%d\n",**arr);
	printf("%d\n",*arr[0]);
	printf("%d\n",arr[0][0]);
	return 0;
}
