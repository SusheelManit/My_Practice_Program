#include <stdio.h>
#include <stdlib.h>

int main()
{
	pid_t pid;
	pid=fork();
	if(pid>0)
	{
		printf("Parent going sleep\n");
		sleep(60);
	}
	else if(pid==0)
	{
		printf("Children exit\n");
		exit(0);
	}
	else
	printf("Unable create process\n");
	return 0;
}
