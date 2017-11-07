/*
The static_assert declaration tests a software assertion at compile time. This can be especially useful for template code.

Syntax looks like this:

static_assert ( bool_constexpr , string ) 		
where

bool_constexpr: a constant expression that is contextually convertible to bool.
string: customized string literal that will appear as compiler error if bool_constexpr is false.
*/

#include <iostream>

using namespace std;

int main ()
{
	cout << "hello world!";
	
	//Following is raised for 64 bit 
	static_assert(sizeof(void *) == 8, "64 bit");

	//Following is raised for 32 bit
	//static_assert(sizeof(void *) == 4, "64 bit is not supported");
	return 0;
}
