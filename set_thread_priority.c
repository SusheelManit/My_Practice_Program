#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <sched.h>
#include <unistd.h>
#include <sys/types.h>
void* thread(void *args)
{
	printf("I'm executing\n");
	for(; ;);
}

void* thread1(void* args)
{
	while(1);
}
int main()
{
	pthread_t tid,tid1;
	pthread_attr_t attr;
	pthread_attr_init(&attr);
	struct sched_param param;
	param.sched_priority=-12;
	pthread_create(&tid,&attr,thread,NULL);
	pthread_create(&tid1,&attr,thread1,NULL);
	if(pthread_setschedparam(tid,SCHED_OTHER,&param))
	{
		printf("Error in setting scheduling\n");
		exit(0);
	}
//	pthead_getschedparam(tid,SCHED_OTHER,&param);
	struct sched_param param1;
	int policy;
	pthread_getschedparam(tid,&policy,&param1);
	printf("%d\n",param1.sched_priority);
	printf("%d\n",policy);
	pthread_join(tid,NULL);
	return 0;
}
