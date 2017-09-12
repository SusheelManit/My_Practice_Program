#include <stdio.h>
#include <stdlib.h>
void numberToString(int number,char *str)
{
	int i=0,j=0;
	char c;
	while(number>0)
	{
		c=(char)(number%10);
		number/=10;
		c='0'+c;
		str[i++]=c;
	}
	str[i]='\0';
	--i;	
	while(j<i)
	{
		str[j++]=str[i--];
	}
	
	printf("\n");
}

int main(int argc,char **argv)
{
	int n=atoi(argv[1]);
	char str[10];
	printf("n=%d\n",n);
	numberToString(n,str);
	printf("%s\n",str);
	return 0;
}
