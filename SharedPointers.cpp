/*
std::shared_ptr is a smart pointer that retains shared ownership of an object through a pointer. Several shared_ptr objects may own the same object. The object is destroyed and its memory deallocated when either of the following happens:

    the last remaining shared_ptr owning the object is destroyed;
    the last remaining shared_ptr owning the object is assigned another pointer via operator= or reset(). 
*/

#include <iostream>
#include <string>
#include <memory>

using namespace std;

class student
{
	string m_name;
	int m_percentage;

public:

	student() = default;
	
	student(string name, int percentage):m_name(name),m_percentage(percentage)
	{ cout << "\nObject created" << endl;}

	void print()
	{
		cout << m_name << " scored " <<m_percentage<<endl;
	}

	~student()	
	{
		cout << "Object destroyed" <<endl;
	}
};

void create()
{
	shared_ptr <student> s1 = make_shared <student> ("sonali",80);
	s1->print();
	cout << "Shared pointer count : " << s1.use_count()<<endl;
	shared_ptr <student> s2 = s1;
	s2->print();
	cout << "Shared pointer count : " << s2.use_count()<<endl;
	
	{
		shared_ptr <student> s3 = s1;
		s3->print();
		cout << "Shared pointer count : " << s3.use_count()<<endl;
	}
	
	cout << "Shared pointer count : " << s1.use_count()<<endl;
}

int main()
{
	create();
	shared_ptr <student> s1 = make_shared <student> ("sharad",80);
	cout << "Shared pointer count : " <<  s1.use_count() <<endl;
}


