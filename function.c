#include <stdio.h>
#include <stdlib.h>

int main()
{
	int ch;
	printf("Enter choice\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
		add(12,56);
		break;
		case 2:
		sub(67,10);
		case 3:
		div(34,12);
		break;
		case 4:
		mul(12,12);
		break;
		default:
		printf("Invalid choice\n");
	}
	return 0;
}

