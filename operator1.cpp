#include <iostream>

using namespace std;

class Complex
{
	int a;
	int b;
	public:
		void setData(int x,int y)
		{
			a=x;	
			b=y;
		}
		void showData()
		{
			cout<<a<<"+"<<b<<"i"<<endl;
		}
		Complex operator+(Complex c)
		{
			Complex temp;
			temp.a=a+c.a;
			temp.b=b+c.b;
			return temp;
		}
};

int main()
{
	Complex a1,a2,a3;
	a1.setData(3,5);
	a1.showData();
	a2.setData(2,1);
	a2.showData();
	a3=a1+a2;
	a3.showData();
	return 0;
}
