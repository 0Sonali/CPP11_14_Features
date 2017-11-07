/*
In C++03, enumerations are not type-safe. They are effectively integers, even when the enumeration types are distinct. This allows the comparison between two enum values of different enumeration types. But c++11 gives compiler error
*/

#include <iostream>

using namespace std;


int main()
{

	enum class  Day {sunday, monday, tuesday};
	enum class Month {jan, feb, march};
	
	Day d = Day::monday;
	Day d1 = Day::sunday;
	Month m = Month::jan;

	// Folllowing code will give compiler error
	/*if (d == m)
	{
		cout << "monday == jan" <<endl;
	}
	else
	{
		cout << "monday != jan" << endl;
	}*/

	if (d == d1)
		cout << "monday == sunday" << endl;
	else
	
		cout << "monday != sunday" << endl;
}


	

