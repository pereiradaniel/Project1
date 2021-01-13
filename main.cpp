#include <iostream>
#include <cstdlib>
#include "utilities.h"
using namespace std;
using namespace foo;

int main(int argc, char* argv[])
{
	// const int size = 9;
	// short arr[size];

	int val;
	cin >> val;
	Foo theFoo{ val };
	cout << theFoo.m_val;

	constexpr int size = 9;
	short arr[size];

	//sayHello();
	//g_value = 20;
	//sayHello();
}