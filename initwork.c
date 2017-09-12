#include <stdio.h>
#include <stdlib.h>

int main()
{
	pid_t pid;
	pid=fork();
	if(pid>0)
	exit(0);
	else if(pid==0)
	{
		sleep(30);
	}
	else
	printf("Unable create process\n");
	return 0;
}
