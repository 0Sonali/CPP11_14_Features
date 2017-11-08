/*
Constexper are expressions such as 3+4 that will always yield the same results, at compile time and at run time. Constant expressions are optimization opportunities for compilers, and compilers frequently execute them at compile time and hardcode the results in the program.
*/

#include <iostream>

using namespace std;

constexpr int fun1()
{
	return 5;
}

int main()
{
	int arr[3+fun1()] = {1,2,3,4,5,6,7,8};
	for (int i =0 ; i < (3+fun1()); i++)
		cout << arr[i] <<endl;
}


