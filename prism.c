#include <stdio.h>
#include <stdlib.h>
int prism(int **ptr,int n)
{
	int spanning[100][100],cost[100][100];
	int from[100]={0};
	int distance[100];
	int visit[100]={0};
	int min_distance;
	int no_of_edges;
	int i,j;
	int u,v;
	int tcost=0;
	//create cost matrix
	for(i=0;i<n;++i)
		for(j=0;j<n;++j)
		{
			if(ptr[i][j]==0)
			cost[i][j]=999;
			else
			cost[i][j]=ptr[i][j];
		}
	visit[0]=1;
	for(i=1;i<n;++i)
	{
		distance[i]=cost[0][i];
		from[i]=0;
		visit[i]=0;
	}
	no_of_edges=n-1;
	while(no_of_edges>0)
	{
		min_distance=999;
		for(i=1;i<n;++i)
		{
			if(visit[i]==0 && distance[i]<min_distance)
			{
				v=i;
				min_distance=distance[i];
			}
		}
		u=from[v];
		spanning[u][v]=distance[v];
		spanning[v][u]=distance[v];
		--no_of_edges;
		visit[v]=1;
		tcost=tcost+cost[u][v];
		///update distance
		for(i=1;i<n;++i)
		{
			if(visit[i]==0 && distance[i]>cost[i][v])
			{
				distance[i]=cost[i][v];
				from[i]=v;
			}
		}
	}
	printf("\nSpanning Tree\n");
	for(i=0;i<n;++i)
	{
		for(j=0;j<n;++j)
		{
			printf("%d  ",spanning[i][j]);
		}
		printf("\n");
	}
	return tcost;
}
int main()
{
	int **ptr,n,i,j,cost,src,dst,weight;
	printf("Enter no of vertices in graph\n");
	scanf("%d",&n);
	ptr=(int **)malloc(sizeof(int *)*n);
	for(i=0;i<n;++i)
	ptr[i]=(int *)malloc(sizeof(int)*n);
	printf("Enter releation of graph\n");
	int total_edges=n*(n-1)/2;
	for(i=0;i<n;++i)
	{
		for(j=0;j<n;++j)
		scanf("%d",&ptr[i][j]);
	}
	cost=prism(ptr,n);
	printf("Minimum spanning tree is%d",cost);
	return 0;
}
