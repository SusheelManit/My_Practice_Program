#include <stdio.h>
#include <stdlib.h>

float add(float a,float b)
{
	return a+b;
}

float sub(float a,float b)
{
	return a-b;
}

float mul(float a,float b)
{
	return a*b;
}

float dis(float a,float b)
{
	return a/b;
}
float operation(float a,float b,float (*operator)(float,float))
{
	return (operator(a,b));
}
int main()
{
	short int ch;
	float a=45.67,b=78.900;
	scanf("%hd",&ch);
	switch(ch)
	{
		case 1:
		printf("%f\n",add(a,b));
		break;
		case 2:
		printf("%f\n",sub(a,b));
		break;
		case 3:
		printf("%f\n",mul(a,b));
		break;
		case 4:
		printf("%f\n",dis(a,b));
		break;
		default:
		printf("Invalid choice\n");
	}
	float (*start[])(float,float)={add,sub,mul,dis};
	printf("Enter choice\n");
	scanf("%hd",&ch);
	a=start[ch](a,b);
	printf("%f\n",a);
	return 0;
}

