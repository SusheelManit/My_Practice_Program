#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> g;
	for(int i=0;i<=10;++i)
	g.push_back(i);

	vector<int>::iterator it;
	vector<int>::reverse_iterator itr;

	cout<<"As it is"<<endl;
	for(it=g.begin();it!=g.end();++it)
	cout<<*it<<"\t";
	cout<<endl;
	cout<<"Reverse order"<<endl;
	for(itr=g.rbegin();itr!=g.rend();++itr)
	cout<<*itr<<"\t";
	cout<<endl;
	//capacity function
	cout<<"Size "<<g.size()<<endl;
	cout<<"Capacity "<<g.capacity()<<endl;
	cout<<"Max Size "<<g.max_size()<<endl;
//	cout<<"Resize "<<g.resize(100);

	//accress function
	int first=g.at(0);
	cout<<"At using "<<first<<endl;
	cout<<"Using subscript "<<g[0]<<endl;
	cout<<"front "<<g.front();
	cout<<"back "<<g.back();
	return 0;
}
