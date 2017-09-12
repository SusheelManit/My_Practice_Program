#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>
#include <sys/types.h>
void* mythread(void *args)
{
	for(int i=0;i<=10;++i){
	printf("thread 1\n");
	sleep(1);
	}
	pthread_detach(pthread_self());
	printf("Now i become detachable\n");
}

void* mythread1(void *args)
{
	for(int i=0;i<=100;++i)
	printf("thread 2\n");
}

int main()
{
	pthread_t tid1,tid2;
	pthread_attr_t attr;
	pthread_attr_init(&attr);
	pthread_create(&tid1,NULL,mythread,NULL);
	pthread_create(&tid2,&attr,mythread1,NULL);
	pthread_join(tid1,NULL);
	pthread_join(tid2,NULL);
	return 0;
}
