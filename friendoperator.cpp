#include <iostream>

using namespace std;

class complex
{
	int real;
	int img;
	public:
	complex(){ }
	complex(int x,int y):real{x},img{y}{ }
	friend complex operator +(complex,complex);
	void show()
	{
		cout<<real<<"+"<<img<<"i"<<endl;
	}
};

complex operator +(complex x,complex y)
{
	complex temp;
	temp.real=x.real+y.real;
	temp.img=x.img+y.img;
	return temp;
}

int main()
{
	complex c1(12,12);
	complex c2(12,12);
	complex c3;
	c3=c1+c2;
	c1.show();
	c2.show();
	c3.show();
	return 0;
}
	
