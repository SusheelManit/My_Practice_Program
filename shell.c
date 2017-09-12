#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <string.h>
#define MAXLINE 4096

void controlc_mask(int sig)
{
	printf("\nbab %% ");
}
int main(void)
{
	char buf[MAXLINE];
	pid_t pid;
	int status;
	if((signal(SIGINT,controlc_mask))==SIG_ERR)
	{
		perror("signal");
		exit(1);
	}
	printf("baba %% ");
	while((fgets(buf,sizeof(buf),stdin))!=NULL)
	{
		if(buf[strlen(buf)-1]=='\n')
		buf[strlen(buf)-1]='\0';
		if((pid=fork())<0)
		{
			perror("fork:");
			exit(1);
		}
		else if(pid==0) //this is child
		{
			if((execlp(buf,buf,NULL))<0)
			{
				perror("exec:");
				exit(1);
			}
		}
		else
		{
			pid=waitpid(pid,&status,0);
		}
		printf("baba %% ");
	}
	return 0;
}
