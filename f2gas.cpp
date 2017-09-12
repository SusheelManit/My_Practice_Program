#include <iostream>

using namespace std;

extern "C" int GetValueFromAsm();

int main()
{
	cout<<"Asm Said="<<GetValueFromAsm();
	return 0;
}

