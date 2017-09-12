#include <unistd.h>
#include <stdio.h>

int main()
{
	char c;
	int ret;
	long long unsigned count=0;
	while(1)
	{
		ret=read(fileno(stdin),&c,1);
		if(ret==0)
		break;
		else
		{
			count+=ret;
			if(c==EOF)
			printf("Wow i'm find EOF\n");
		}
	}
	printf("Read %lld bytes.\n",count);
	return 0;
}
