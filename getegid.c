#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <stdio.h>

int main(int argc,char** argv,char **envp)
{
	gid_t gid;
	gid_t real;
	uid_t uid;
	real=getuid();
	gid=getegid();
	uid=geteuid();
	if(setuid(0)==0)
	printf("UID=%d\tGID=%d",(int)uid,(int)gid);
	printf("\nReal=%d\n",(int)real);
	return 0;
}
