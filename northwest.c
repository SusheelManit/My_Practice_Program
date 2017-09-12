#include <stdio.h>
#include <stdlib.h>


int main()
{
	int i,j,row,col,ans;
	int arr[10][10];
	printf("Enter source and demand\n");
	scanf("%d %d",&row,&col);
	printf("Fill matrix row  wise\n");
	for(i=0;i<=row;++i)
	for(j=0;j<=col;++j)
	scanf("%d",&arr[i][j]);
	ans=0;
	i=0;
	j=0;
	while(i<row&&j<col)
	{
		if(arr[i][col]>arr[row][j])
		{
			ans+=arr[i][j]*arr[row][j];
			arr[i][col]=arr[i][col]-arr[row][j];
			j++;
		}
		else if(arr[i][col]<arr[row][j])
		{
			ans+=arr[i][j]*arr[i][col];
			arr[row][j]-=arr[i][col];
			i++;
		}
		else
		{
			ans+=arr[i][j]*arr[i][col];
			i++;
			j--;
		}
	}
	printf("Feasible solution is =%d\n",ans);
	return 0;
}

