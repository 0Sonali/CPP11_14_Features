/*
With C++11, everything can be initialized in much the same way.
But, there are differences in terms of priorities, it's set in this order:

	1. initializer_list
	2. regular constructor
	2. aggregate initialization
*/

#include <iostream>
#include <vector>

using namespace std;

class A
{
public:
	int mx;
	double my;
};


class B
{
public:
	B(int x, double y) : mx {x}, my {y} {}
	
	int mx;
	double my;
};

class C
{
public:
	C(int x, double y) : mx {x}, my {y} {}
	C(const initializer_list <int> &v)
	{
		mx = *(v.begin());
		my = *(v.begin()+1);
	}

	int mx;
	double my;
};


int main()
{
	A a{1,4.5};
	B b{3,7.8};
	C c{6,8};	

	cout << "Values of A : " << a.mx <<" "<< a.my<<endl;

	cout << "Values of B : " << b.mx <<" "<< b.my<<endl;

	cout << "Values of C : " << c.mx <<" "<< c.my<<endl;


}
