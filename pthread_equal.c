#include <stdio.h>
#include <pthread.h>

void* thread(void* args)
{
	}

int main()
{
	pthread_t tid;
	pthread_create(&tid,NULL,thread,NULL);
	if(pthread_equal(pthread_self(),tid)==0)
	{
		printf("Not equal\n");
	}
	else
	printf("equal");
	printf("\n");
	return 0;
}
