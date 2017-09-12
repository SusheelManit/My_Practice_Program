#include <stdio.h>
<<<<<<< HEAD

int main()
{
	int a=3,b=3,c=3,d=3;
	printf("%d",addbyint(a,b,c,d));
	printf("\n");
	return 0;
}
=======
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

>>>>>>> 5e41defdc796fbbb2a79c5e71e0632324880b01b
