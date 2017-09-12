#include<stdio.h>
int main()
{
	struct site
	{
		char name[] = "GeeksQuiz";
		int no_of_pages = 200;
	};
	struct site *ptr;
	printf("%d ", ptr->no_of_pages);
	printf("%s", ptr->name);
	getchar();
	return 0;
}

