#include <iostream>

using namespace std;

class student
{
	string name;
	string addr;
	string mob;
	public:
	student():name{nullptr},addr{nullptr},mob{nullptr} { }
	student(string name,string addr,string mob):name{name},addr{addr},mob{mob} { }
	friend ostream& operator <<(ostream&,student);
	friend istream& operator >>(istream&,student&);
};
istream& operator >>(istream& cin,student& s1)
{
	cin>>s1.name;
	cin>>s1.addr;
	cin>>s1.mob;
	return cin;
}
ostream& operator <<(ostream& cout,student s1)
{
	cout<<s1.name<<endl;
	cout<<s1.addr<<endl;
	cout<<s1.mob<<endl;
	return cout;
}
int main()
{
	student s1("sushil","shankargarh","98343343");
	student s2;
	cout<<s1;
	cin>>s2;
	cout<<s2;
	return 0;
}
