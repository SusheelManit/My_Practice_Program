#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> arr;
	int x;
	for(int i=0;i<=5;++i)
	{
		arr[i]=i;
	}
	for(int i=0;i<arr.size();++i)
	cout<<arr[i]<<" ";
	cout<<endl;
	return 0;
}
