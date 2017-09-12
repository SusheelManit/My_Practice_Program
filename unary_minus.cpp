#include <iostream>

using namespace std;

class complex
{
	int real;
	int img;
	public:
	complex():real{0},img{0}{ }
	complex(int real,int img):real{real},img{img}{ }
	void show()
	{
		cout<<this->real<<" + "<<this->img<<"i"<<endl;
	}
	complex operator -()
	{
		complex tmp;
		tmp.real=-this->real;
		tmp.img=-this->real;
		return tmp;
	}
};

int main()
{
	complex a1(12,14);
	complex a2;
//	a2=a1.operator -();
	a2=-a1;
	a2.show();
	return 0;
}
