#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct student
{
	int age;
	char name[0];
};

int main()
{
	struct student s;
	s.age=12;
	strcpy(s.name,"sushil lumar shankar garh alll;lljshfsghdwivwedi class 9th");
	printf("age= %d\n",s.age);
	printf("name=%s\n",s.name);
	return 0;
}

