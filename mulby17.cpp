#include <iostream>

using namespace std;

extern "C" int mulby17(int a);

int main()
{
	int a;
	cout<<"Enter a number\n";
	cin>>a;
	cout<<"Ans="<<mulby17(a);
	return 0;
}

