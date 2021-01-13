#include <iostream>
#include <cstdlib>
#include "utilities.h"
using namespace std;
using namespace foo;

int main(int argc, char* argv[])
{
	sayHello();
	g_value = 20;
	sayHello();
}