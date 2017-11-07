/*
The override special identifier means that the compiler will check the base class(es) to see if there is a virtual function with this exact signature. And if there is not, the compiler will indicate an error.
*/

#include <iostream>

using namespace std;

class A
{
public:
	virtual const char* getName(int x) {return "A";}
	virtual const char* getName1(int x) { return "A"; }
	virtual const char* getName2(int x) { return "A"; }
	virtual const char* getName3(int x) { return "A"; }

	virtual A* getThis() { cout << "Base pointer "; return this; }; 
};
 
class B : public A
{
public:

	virtual const char* getName(int x) override final {return "B";} //okay, function is override and marked as final
//	virtual const char* getName1(short int x) override { return "B"; } // compile error, function is not an override
//	virtual const char* getName2(int x) const override { return "B"; } // compile error, function is not an override
	virtual const char* getName3(int x) override { return "B"; } // okay, function is an override of A::getName3(int)
	
	virtual B* getThis() { cout << "Derived pointer "; return this; }	//okay, covariant return types, can be overloaded with derived class
};

class C final : public B //class C is marked as final 
{
public:
//	virtual const char* getName() override { return "C"; } // compile error: overrides B::getName(), which is final
	virtual const char* getName3(int x) override { return "C"; } // okay, function is an override of A::getName3(int) 
};

//class D : public C //compile error:cannot inherit from final class
//{
//};
 
int main()
{
	B b;
	C c;
	
	cout << b.getName3(5)<<endl;
	cout << c.getName3(18)<<endl;
	cout << b.getThis()<<endl;

	return 0;
}




