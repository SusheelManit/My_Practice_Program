#include <stdio.h>
#include <pthread.h>
#include <signal.h>
#include <sys/types.h>
#include <unistd.h>

void* thread(void* args)
{
	while(1);
}

int main()
{
	pthread_t tid;
	pthread_create(&tid,NULL,thread,NULL);
	printf("Hello im parent thread sending signal to thread tid1 id\n");
	pthread_kill(tid,SIGSEGV);
	pthread_join(tid,NULL);
	return 0;
}
