#include <iostream>

using namespace std;

extern "C" int init();
extern "C" int sub();

int main()
{
	int a;
	a=init();
	cout<<"a="<<a<<endl;
	cout<<"sub="<<sub()<<endl;
	return 0;
}
