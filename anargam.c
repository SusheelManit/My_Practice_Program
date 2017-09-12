#include <stdio.h>
#include <string.h>

int main()
{
	char str[100];
	printf("Enter a string\n");
	scanf("%s",str);
	strfry(str);
	printf("%s\n",str);
	return 0;
}
