#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
/* this program illustrate thread specific data   */
pthread_key_t key1;
void* threadrunner(void *args)
{
	int *arr=(int *)pthread_getspecific(key1);
//	for(int i=1;i<=10;++i)
	printf("%d\t",arr);
	printf("\n");
}	
int main()
{
	int *arr=(int *)malloc(sizeof(int)*20);
	for(int i=1;i<=10;++i)
	arr[i]=i;
	pthread_t tid;
	pthread_attr_t attr;
	pthread_attr_init(&attr);
	if(!pthread_key_create(&key1,NULL))
	{
		fprintf(stderr,"Unable to create key\n");
		exit(1);
	}
	if(!pthread_setspecific(key1,arr))
	fprintf(stderr,"Errro\n");
	pthread_create(&tid,&attr,threadrunner,NULL);
	pthread_join(tid,NULL);
	pthread_key_delete(key1);
	return 0;
}
