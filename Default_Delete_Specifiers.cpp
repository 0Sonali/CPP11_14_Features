/*
Default -

If a class is defined with any constructors, the compiler will not generate a default constructor.
class A
{
public:
    A(int a){};
};
Then, if we do:
A a;
The compiler complains that we have no default constructor. That's because compiler did not make the one for us because we've already had one that we defined.
We can force the compiler make the one for us by using default specifier

Delete - 

C++11 allows us to disable certain features by using delete.

*/

#include <iostream>

using namespace std;


class A
{
public:
	A () = default; //force the compiler make the one for us by using default specifier
	A(int a){cout << "constructor with int type argument" << endl;}
	A(double a) = delete; //constructor with double type argument is deleted
	A & operator = (const A&) = delete;
};

int main()
{
	A a(5);
//	A b(5.7); //compiler error: double value deleted.
//	a = b; //compiler error: assignment operator is deleted.
}

