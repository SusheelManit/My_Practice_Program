#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void* thread(void *args)
{
	pthread_t tid;
	tid=pthread_self();
	int a=12,b=12;
	int *ans=(int *)malloc(sizeof(int));
	 *ans=a+b;
	printf("My id=%llu\n",(long long)tid);
	printf("address of ans inside thread %p\n",ans);
	pthread_exit(ans);
}
int main()
{
	pthread_t tid;
	if(pthread_create(&tid,NULL,thread,NULL))
	{
		perror("pcreate\n");
		exit(1);
	}
	int *a=NULL;
	printf("address of a before join %p\n",a);
	printf("Insid main my id=%llu\n",(long long)tid);
	pthread_join(tid,(void **)&a);
	printf("thread return value=%d\n",*a);
	printf("address of a after join %p\n",a);
//	else
//	printf("Some problem occur in thread\n");
	return 0;
}
	
