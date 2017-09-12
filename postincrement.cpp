#include <iostream>

using namespace std;

class dump
{
	int x;
	float y;
	public:
	dump():x{0},y{0.0f} { }
	dump(int x,int y):x{x},y{y} { }
	dump operator ++(int)
	{
		dump temp;
		temp.x=this->x++;
		temp.y=this->y++;
		return temp;
	}
	void show()
	{
		cout<<this->x<<" "<<this->y<<endl;
	}
};

int main()
{
	dump d1(12,12.34);
	dump d2;
	d1.show();
	d2=d1++;
	d1.show();
	d2.show();
	return 0;
}
