/*
C++11 extends the syntax of the for statement to allow for easy iteration over a range of elements.

This form of for will iterate over each element in the list. It will work for C-style arrays, initializer lists, and any type that has begin() and end() functions defined for it that return iterators.

All of the standard library containers that have begin/end pairs will work with the range-based for statement.
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{

	vector <int> v {1,2,3,4,5};

	for ( auto it : v)
		cout << it << " ";
}

