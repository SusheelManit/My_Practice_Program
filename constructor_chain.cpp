#include <iostream>

using namespace std;
class Cylinder{
	public:
	Cylinder()
	{
		cout<<"Cylinder"<<endl;
	}
};
class Transmission
{
	public:
	Transmission()
	{
		cout<<"Transmission"<<endl;
	}
};
class Wheel
{
	public:
	Wheel()
	{
		cout<<"Wheel"<<endl;
	}
};
class Engine
{
	Cylinder cylinder[2];
	public:
	Engine()
	{
		cout<<"Engine Constructore call"<<endl;
	}
};
class Moped
{
	Engine m_engine;
	Transmission m_transmission;
	Wheel m_wheel[2];
	public:
	Moped()
	{
		cout<<"Moped"<<endl;
	}
};

int main()
{
	Moped honda;
	return 0;
}
	
