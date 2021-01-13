#include <iostream>
#include "utilities.h"
// #include <cstdlib>
using namespace std;

namespace foo
{
	int g_value = 10;
	void sayHello()
	{
		static int cnt = 0;	// This variable will exist for the entire running of the program. After the first time this function is running, this declaration is ignored. cnt will be incremented.
		cnt++;
		cout << cnt << "Hello: [" << g_value << "]\n";
	}

	static void sayBye()
	{
		cout << "Goodbye\n";
	}
	// Static function makes this function available only from inside this file.
}