#include <iostream>

using namespace std;

void add(int& x){
x+=1;
}

void add(int&& x)
{
	x+=1;
}
int main()
{
	int x=20;
	add(x);
	cout<<x<<endl;
	add(10);
	cout<<x<<endl;
	return 0;
}
