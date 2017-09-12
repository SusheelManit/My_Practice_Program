#include <iostream>

using namespace std;

class collection
{
	int x;
	float y;
	public:
	collection():x{0},y{0.0}{ }
	collection(int x,float y):x{x},y{y}{ }
	collection operator ++() //preincrement
	{
		collection temp;
		temp.x=++this->x;
		temp.y=++this->y;
		return temp;
	}
	void show()
	{
		cout<<this->x<<"  "<<this->y<<endl;
	}
};

int main()
{
	collection c1(12,45.5);
	collection c2;
	c1.show();
	c2=++c1;
	c1.show();
	c2.show();
	return 0;
}
