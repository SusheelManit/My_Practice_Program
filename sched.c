#include <unistd.h>
#include <sched.h>

int main()
{
	while(1)
	{
		sched_yield();
		printf("Hello World\n");
	}
	return 0;
}
