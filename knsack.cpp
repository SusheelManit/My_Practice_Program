#include <iostream>
using namespace std;
int max(int a,int b)
{
    if(a>b)
    return a;
    else
    return b;
}
int getMax(int N,int M,int value[],int weight[])
{
    int dynamic[N+1][M+1];
    for(int i=0;i<N+1;++i)
    {
        for(int j=0;j<M+1;++j)
        {
            if(i==0|| j==0)
            dynamic[i][j]=0;
            else if(weight[i-1]>j)
            dynamic[i][j]=dynamic[i-1][j];
            else
            dynamic[i][j]=max(dynamic[i-1][j],value[i-1]+dynamic[i-1][j-i]);
        }
    }
    return dynamic[N][M];
}
int main() {
	int test,n,max_weight,weight[1000],value[10000];
	cin>>test;
	while(test--)
	{
	    cin>>n>>max_weight;
	    for(int i=0;i<n;++i)
	    cin>>value[i];
	    for(int i=0;i<n;++i)
	    cin>>weight[i];
	    
	    cout<<getMax(n,max_weight,value,weight)<<endl;
	    
	}
	return 0;
}
