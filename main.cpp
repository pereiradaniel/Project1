#include <iostream>
#include <cstdlib>
#include "utilities.h"
using namespace std;
using namespace foo;

int main(int argc, char* argv[])
{
	const int size = 9;
	short arr[size];

	int val;
	cin >> val;
	Foo theFoo{ val };
	cout << theFoo.m_val;

	// short arr[theFoo.m_val];

	//sayHello();
	//g_value = 20;
	//sayHello();
}