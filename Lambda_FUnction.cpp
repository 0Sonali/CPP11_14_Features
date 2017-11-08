/*
C++11 provides the ability to create anonymous functions, called lambda functions. It allows a function to be defined at the point where it's needed in another expression. It is a function that we can write inline in our code in order to pass in to another function.
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector <int> vec = {1,2,3,4,5};

	for_each(vec.begin(),vec.end(),[](int v){cout << v <<endl;});
}

