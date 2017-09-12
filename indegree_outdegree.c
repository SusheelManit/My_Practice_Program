#include <stdio.h>
#include <stdlib.h>
#define MAX 30

int main()
{
	int Graph[MAX][MAX],i,j,i_degree,o_degree,vertices,dst,src;
	printf("Enter no of vertices in graph\n");
	scanf("%d",&vertices);
	int total_edge=vertices*(vertices-1);
	for(i=0;i<total_edge;++i)
	{
		printf("Enter src and dst\n");
		scanf("%d %d",&src,&dst);
		if(src>(vertices-1) || dst>(vertices-1))
		{
			fprintf(stderr,"Wrong input\n");
			--i;
		}
		if(src==-1 && dst==-1)
		break;
		Graph[src][dst]=1;
	}
//here we found indegree and outdegree
	for(i=0;i<vertices;++i)
	{
		o_degree=0;
		for(j=0;j<vertices;++j)
		{
			if(Graph[i][j]==1)
			o_degree++;
		}
		i_degree=0;
		for(j=0;j<vertices;++j)
		{
			if(Graph[j][i]==1)
			i_degree++;
		}
	printf("For vertices %d in_degree=%d  and o_degree=%d\n",(i+1),i_degree,o_degree);
	}
	return 0;
}
	
