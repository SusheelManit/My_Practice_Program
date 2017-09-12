#include <stdio.h>
#include <stdlib.h>

int main()
{
	int **p=(int **)malloc(sizeof(int *)*3);
	int i,j;
	for(i=0;i<3;++i)
	*(p+i)=(int *)malloc(sizeof(int *)*3);
	for(i=0;i<3;++i)
	for(j=0;j<3;++j)
	p[i][j]=rand()%17;
	printf("printtinf array\n");
	for(i=0;i<3;++i)
	{
		for(j=0;j<3;++j)
		printf("%d  ",p[i][j]);
		printf("\n");
	}
return 0;
}	
