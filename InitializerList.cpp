/*
C++11 binds the concept to a template, called std::initializer_list. This allows constructors and other functions to take initializer-lists as parameters
*/

#include <iostream>
#include <vector>

using namespace std;

class MyNumber
{

public:
	MyNumber(const initializer_list <int> &v)
	{
		for (auto item : v)
			mVector.push_back(item);
	}		

	void printNumbers()
	{
		for (auto item : mVector)
			cout << item << "\t";
	}
private:
	vector <int> mVector;
};

int main()
{
	//define vector using initializer list 
	vector <int> v = {6,7,89,3,1};
	for (auto itr :v)
		cout << itr << "\t";
	cout << endl;

	//use initializer list constructor 
	MyNumber num = {3,5,2,7,4};
	num.printNumbers();
	cout << endl;
	return 0;
}
