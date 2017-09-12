#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NUM_FUNC 4
int add(int a,int b)
{
	return a+b;
}
int sub(int a,int b)
{
	return a-b;
}
int mul(int a,int b)
{
	return a*b;
}
int divi(int a,int b)
{
	return a/b;
}

typedef int (*helper_func)(int ,int);

typedef struct
{
	char *str;
	helper_func f;
}pair_of_function;
pair_of_function pair[NUM_FUNC]={{"add",add},{"sub",sub},{"mul",mul},{"divi",divi}};
helper_func get_func(char *chr)
{
	int i;
	for(i=0;i<NUM_FUNC;++i)
	{
		if((strcmp(chr,pair[i].str)==0))
			return pair[i].f;
	}
	return NULL;
}


int main(int argc,char** argv)
{
	if(argc!=4)
	{
		fprintf(stderr,"Provide <operation name><arg1><arg2>\n");
		exit(1);
	}
	int arg1=atoi(argv[2]);
	int arg2=atoi(argv[3]);
	helper_func f=get_func(argv[1]);
	if(f==NULL)
	{
		fprintf(stderr,"function not found\n");
		exit(1);
	}
	printf("%d",f(arg1,arg2));
	printf("\n");
	return 0;
}
