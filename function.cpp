#include <iostream>

using namespace std;

extern "C" int addbyint(int,int,int,int);

int main()
{
	int a=3,b=2,c=2,d=5;
	cout<<"Sum="<<addbyint(a,b,c,d);
	cout<<endl;
	return 0;
}

