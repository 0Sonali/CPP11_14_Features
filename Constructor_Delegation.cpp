/*
C++11 allows constructors to call other peer constructors (known as delegation). This allows constructors to utilize another constructor's behavior with a minimum of added code
*/

#include <iostream>
#include <string>

using namespace std;

class A
{
public:
	A()
	{
		cout << "Hello World " ;
	}


	A(string s) : A()
	{
		cout << s <<endl;
	}

	A(const A & b) : A()
	{
		cout << "copy constructor"<<endl;
	}
};

int main()
{
	A a("sonali");
	A b(a);

}
