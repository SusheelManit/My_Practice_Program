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
		cout<<real<<" + "<<img<<"i"<<endl;
	}
	complex operator +(complex a1)
	{
		complex tmp;
		tmp.real=this->real+a1.real;
		tmp.img=this->img+a1.img;
		return tmp;
	}
};
int main()
{
	complex a1(12,34);
	complex a2(4,5);
	complex a3;
	a3=a1+a2;
	a3.show();
	return 0;
}
