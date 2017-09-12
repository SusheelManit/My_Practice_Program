#include <iostream>
#include <cstring>
using namespace std;

class author
{
	char name[100];
	friend class book;
};

class book
{
	char title[20];
	float price;
	author writer;
	public:
	book(char *title,float price,char *name)
	{
		strcpy(this->title,title);
		this->price=price;
		strcpy(this->writer.name,name);
	}
	void show()
	{
		cout<<"Author name  "<<writer.name<<endl;
		cout<<"Book name    "<<this->title<<endl;
		cout<<"Price        "<<this->price<<endl;
	}
};

int main()
{
	book b1("c++",450.00,"Bijarne Strotops");
	b1.show();
	return 0;
}
