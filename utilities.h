#ifndef FOO_UTILITIES_H
#define FOO_UTILITIES_H
// In this header, put declarations.
// Don't use pragmaonce!!!
namespace foo
{
	void sayHello();		// NEVER include cpp files anwhere.
	extern int g_value;		// Declare that it exists, but do NOT allocate memory.
							// Extern means it is JUST a declaration. functions are extern by default.
							// exertn int g_value = 7; <- This renders extern invalid.
}
#endif