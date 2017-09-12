#include <stdio.h>
#include <unistd.h>
int main(int argc,char **argv[],char **envp)
{
	int *ptr=(int *)0;
	printf("%d\n",(int)getpid());
	*ptr=100;
	printf("%d\n",*ptr);
	return 0;
}
