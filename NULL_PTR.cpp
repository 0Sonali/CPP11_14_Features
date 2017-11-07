/*
The constant 0 has had the double role of constant integer and null pointer constant. The ambiguity inherent in the double meaning of 0 was dealt with in C by the use of the preprocessor macro NULL, which commonly expands to either ((void*)0) or 0.

C++ didn't adopt the same behavior, allowing only 0 as a null pointer constant.

This interacts poorly with function overloading:

void foo(char *);
void foo(int);
If NULL is defined as 0, which function the statement foo(NULL) will call?

Probably, it will call foo(int), which is almost certainly not what the programmer intended. In other words, there is an ambiguity.

So, C++11 corrected this by introducing a new keyword to serve as a distinguished null pointer constant (nullptr)
*/

#include <iostream>

using namespace std;

void foo(int a)
{
	cout << "Integer call" <<endl;
}

void foo(char * a)
{
	cout << "Pointer call"<<endl;
}

int main()
{
	foo(nullptr);

	bool b { nullptr};
	
	cout << "Boolean value is : " << b<<endl;
}
