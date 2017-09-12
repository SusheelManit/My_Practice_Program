#include <iostream>

using namespace std;

class A
{
	int a;
	int b;
	public:
	A():a{0},b{0} { }
	A(int x,int y):a{x},b{y}{ }
	friend void sum(A );
};

void sum(A aa)
{
	cout<<"sum of a and b "<<aa.a+aa.b<<endl;
}

int main()
{
	A a(12,14);
	sum(a);
	return 0;
}

