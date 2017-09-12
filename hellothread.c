#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void *fun(void *args)
{
	printf("Child =%d\n",(int)getpid());
	printf("thread2 id=%lu\n",(unsigned long int )pthread_self());
	getchar();
	printf("Hello World\n");
	sleep(5);
	pthread_exit(NULL);
}

int main()
{
	pthread_t tid;
	pthread_attr_t attr;
	pthread_attr_init(&attr);
	printf("Process Id=%d\n",(int)getpid());
	getchar();
	pthread_create(&tid,&attr,fun,(void *)NULL);
	printf("thread 1 id =%lu",(unsigned long int)pthread_self());
	pthread_exit(NULL);
}
