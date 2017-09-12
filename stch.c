#include <stdio.h>

int main()
{
	char ch;
	scanf("%c",&ch);
	switch(ch)
	{
		case 'a' ... 'z':
		printf("lower");
		break;
		case 'A' ... 'Z':
		printf("upper");
		break;
		case '0' ... '9':
		printf("number");
		break;
		default:	
		printf("special");
	}
	return 0;
}
