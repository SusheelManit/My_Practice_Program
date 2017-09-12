#include <iostream>

using namespace std;

class A
{
	int x;
	int y;
//	friend class B;
	public:
	A():x{0},y{0}{ }
	void setdata(int x,int y)
	{
		this->x=x;
		this->y=y;
	}
};

class B
{
	public:
	void showdata(A a)
	{
		cout<<a.x<<" "<<a.y<<endl;
	}
};

int main()
{
	A a;
	a.setdata(12,13);
	B b; 
        b.showdata(a);
	return 0;
}
