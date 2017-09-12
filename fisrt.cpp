#include <iostream>

using namespace std;

extern "C" int GetValue();

int main()
{
	cout<<"Asm Said="<<GetValue();
	return 0;
}

