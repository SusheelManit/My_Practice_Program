#include <iostream>

using namespace std;

class complex
{
	int img;
	int real;
	public:
	complex(){ }
	complex(int x,int y):real{x},img{y}{ }
	void show()
	{
		cout<<real<<"+"<<img<<"i"<<endl;
	}
	friend complex operator -(complex);
};

complex operator -(complex x)
{
	complex temp;
	temp.real=-x.real;
	temp.img=-x.img;
	return temp;
}

int main()
{
	complex c1(12,12);
	c1.show();
	complex c2;
	c2=-c1;
	c2.show();
	return 0;
}
