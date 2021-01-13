#include <iostream>
#include <cstdlib>
#include "utilities.h"
using namespace std;
using namespace foo;

constexpr int getValue (int seed) 
{
	return seed * 10;
}

int main(int argc, char* argv[])
{
	//sayHello();
	//g_value = 20;
	//sayHello();

	// const int size = 9;
	// short arr[size];

	int val;
	cin >> val;
	
	Foo theFoo{ val };
	cout << theFoo.m_val;
	
	const int constVal = val; // Value cannot be changed

	constexpr int size = 9;	// constexpr: the value cannot be changed AND must be known at compile time.
	short arr[getValue(3)];


}