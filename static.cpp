#include <iostream>

using namespace std;

class Account
{
	int balance;
	static float roi;
	public:
	void setBalance(int balance)
	{
		this->balance=balance;
	}
	static void setRoi(float r)
	{
		roi=r;
	}
	static float getRoi()
	{
		return roi;
	}
};
float Account::roi=1.2f;

int main()
{
	Account a;
	a.setBalance(1000);
	Account::setRoi(3.5f);
	cout<<Account::getRoi()<<endl;
	return 0;
}
