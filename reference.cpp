#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int b=30;
	int &a=b;
	a=20;
	cout<<a<<endl;
	cout<<b<<endl;
	return 0;
}
