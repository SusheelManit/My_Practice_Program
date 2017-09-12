#include <iostream>

using namespace std;

extern "C" int subby5x(int,int);

int main()
{
	int a=56,b=3 ;//a-5b
	cout<<"Ans="<<subby5x(a,b)<<endl;
	return 0;
}
