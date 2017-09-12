#include <stdio.h>
#include <stdlib.h>

int main()
{
	int arr[3][4];
	int i,j;
	for(i=0;i<3;++i)
	for(j=0;j<4;++j)
	arr[i][j]=random()%1729;
	//printing element
	for(i=0;i<3;++i)
	{
		for(j=0;j<4;++j)
		printf("%d\t",arr[i][j]);
		printf("\n");
	}
	printf("arr[0]=%p\n",arr[0]);
	printf("arr=%p\n",arr);
	printf("&arr=%p\n",&arr);
	printf("***arr=%p\n",***arr);

	return 0;
}

