/*
Type Inference refers to automatic deduction of data type of an expression in a programming language. Before C++ 11, each data type need to be explicitly declared at compile time, limiting the values of an expression at run time but after new version of C++ many keywords are included which allows a programmer to leave the type deduction to compiler itself.
With type inference capabilities, we can spend less time having to write out things compiler already knows. As all the types are deduced in compiler phase only, the time for compilation increases slightly but it does not affect run time of program.
*/

//auto keyword

//The auto keyword specifies that the type of the variable that is begin declared will automatically be deduced from its initializer and for f//functions if their return type is auto then that will be evaluated by return type expression at runtime.


//decltype Keyword

//It inspects the declared type of an entity or the type of an expression. Auto lets you declare a variable with particular type whereas decltype lets you extract the type from the variable so decltype is sort of an operator that evaluates the type of passed expression.


#include <iostream>
#include <typeinfo>
#include <vector>
using namespace std;

template<class A, class B>
auto findMin(A a, B b) -> decltype(a < b ? a : b)
{
    return (a < b) ? a : b;
}

int add(int x, int y)
{
    return x + y;
}
 
int main()
{

	//use auto at the point of variable declaration 
	auto a = 15;
	auto b = 3.67;
	auto c = &a;
	
	cout << "a = " << a << " type = " << typeid(a).name() << endl;
	cout << "a = " << b << " type = " << typeid(b).name() << endl;
	cout << "a = " << c << " type = " << typeid(c).name() << endl;

	//use auto while working with iterators

	vector <string> students;
	students.push_back("sonali");
	students.push_back("Archana");
	students.push_back("Neha");
	students.push_back("Anushka");

	for(auto iter = students.begin();iter != students.end();++iter)
	{
		cout << *iter <<'\t';
	}
	cout <<endl;

	//use auto with return value of a function 
	auto sum = add(5, 6);
	cout << "sum is = " << sum << endl;
	
	//use auto and decltype with templates 
	cout << findMin(4, 3.44) << endl;
    	cout << findMin(5.4, 3) << endl; 
}
