#include <iostream>
#include "utilities.h"
// #include <cstdlib>
using namespace std;

namespace foo
{
	int g_value = 10;
	void sayHello()
	{
		cout << "Hello: [" << g_value << "]\n";
	}
}