#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void *myfunction(void *arg)
{
	for(int i=0;i<=100;++i)
	printf("Hello Default thread\n");
	pthread_exit(0);
}

int main()
{
	pthread_t id;
	pthread_create(&id,NULL,myfunction,NULL);
	for(int i=1;i<=100;++i)
	printf("main thread\n");
	pthread_join(id,NULL);
	return 0;
}
