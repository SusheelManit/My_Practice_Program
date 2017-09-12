#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>


int main()
{
	char buf[100];
	int status;
	status=read(0,buf,100);
	printf("read byte=%d\n",status);
	printf("%s\n",buf);
	return 0;
}
