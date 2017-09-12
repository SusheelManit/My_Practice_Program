#include <stdio.h>
#include <stdlib.h>

struct stu
{
	int age;
	char name;
};
int main()
{
	struct stu str;
	char arr[]="hello";
	printf("%d \n",str.age);
	return 0;
}
