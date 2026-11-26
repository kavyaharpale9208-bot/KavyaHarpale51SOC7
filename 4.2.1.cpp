#include<iostream>
using namespace std;

class Person
{
	private:
	string name;

	public:
	void read()
	{
		cout<<"The person is reading book:"<<endl;
	}
};

class Student:public Person
{
	private:
	int roll_no;

	public:
	void read()
	{
		cout<<"The student is reading magazine:"<<endl;
	}
};

int main()
{
	Person p;
	p.read();

	Student s;
	s.read();

	return 0;
}
