#include<iostream>
using namespace std;

class Person
{
	public:
	virtual void walk()
	{
		cout<<"Walking"<<endl;
	}
};

class Student:public Person
{
	public:
	void walk()
	{
		cout<<"Student walking"<<endl;
	}
};

int main()
{
	Person*ptr;
	Student s;
	ptr=&s;
	ptr->walk();
	return 0;
}
