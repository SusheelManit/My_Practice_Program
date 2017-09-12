#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char expr[100],operator[100],variable[20][100],ascii[100];
	int constant[100];
	int number=0;
	int i=-1,j=-1,k=-1,len=0;
	char ch;
	printf("========Enter your Expression=======\n");
	scanf("%[^\n]%*c",expr);
	printf("Your Expression is\n");
	printf("%s\n",expr);
	len=strlen(expr);
	for(i=0;i<len;++i)
	ascii[i]=(int)expr[i];
	printf("Ascii performed\n");
	i=0;
	for(i=0;i<len;++i)
	{
	}
	printf("Constant\n");
	for(i=0;i<j;++i)
	printf("%d %d  ",i+1,constant[i]);
	printf("\n");
	return 0;
}
	
