#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <sys/types.h>
int global_addr=20;
char *ptr=NULL;
void handler(int sig)
{
	printf("Text segment starts at %p\n",ptr);
	exit(0);
}
int main()
{
	int stack_seg=20;
	char c;
	int *ptr=(int *)malloc(sizeof(int));
	if(ptr==NULL)
	exit(1);
	signal(SIGSEGV,handler);
	printf("stack segment %15p\n",&stack_seg);
	printf("heap segment %15p\n",ptr);
	printf("data+constant%15p\n",&global_addr);
	printf("code segment %15p\n",main);
	ptr=(char *)main;
	while(1)
	{
		c=*ptr;
		ptr--;
	//	c=*ptr; //generate a SIGSEGV
	}
	return 0;
}
