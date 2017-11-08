/*
The new std::array is a container for constant size arrays. It's a sequential container class defined in <array> that specifies a fixed length array at compile time.

It can be initialized with aggregate-initialization, given at most n initializers that are convertible to

T: std::array<int, 5> a = {1, 2, 3, 4, 5};
It combines the performance and accessibility of a C-style array with the benefits of a standard container, such as knowing its own size, supporting assignment, random access iterators, etc.
*/

#include <iostream>
#include <array>
#include <algorithm>
#include <iterator>

using namespace std;

int main()
{
	array <int, 5> a1 = {6,7,2,3,1};

	cout << "Array: ";
	for (auto i : a1)
		cout << i << " ";

	cout << endl;

	sort ( a1.begin(), a1.end());

	cout << "Sorted array: ";
	for (auto i : a1)
		cout << i << " ";

	cout <<endl;

	cout << "Reverse array: ";
	reverse_copy (a1.begin(), a1.end(), ostream_iterator <int> (cout, " "));
	cout << endl;
}
