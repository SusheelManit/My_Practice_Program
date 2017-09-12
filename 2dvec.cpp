#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<vector<int> > vec[4];
	for(int i=0;i<4;++i)
	for(int j=0;j<5;++j)
	vec[i].push_back(i*j);

	//printting
	for(int i=0;i<vec.size();++i)
	{
	for(int j=0;j<vec[i].size();++j)
	cout<<vec[i][j]<<" ";
	cout<<endl;
	}
	return 0;
}
