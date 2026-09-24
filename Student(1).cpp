#include<iostream>
#include<string>
using namespace std;

class Student
{
public:
	int roll_no;
	string student_name;
	float marks;

void accept()
{
cout<<"Enter name:"<<endl;
cin.ignore();
getline(cin,student_name);
cout<<"enter roll no:"<<endl;
cin>>roll_no;
cout<<"Enter marks:"<<endl;
cin>>marks;
}

void calculateResult()
{
	if(marks>=40)
	{
	cout<<"The result is pass"<<endl;
	}
	else{
	cout<<"The result is fail"<<endl;
	}
}

void display()
{
	cout<<"\n---Student Details---"<<endl;
	cout<<"The name of student is:"<<student_name<<endl;
	cout<<"The roll no of student is:"<<roll_no<<endl;
	cout<<"The result of student is:"<<marks<<endl;

	calculateResult();
}
};


int main()
{
	Student s;

	s.accept();
	s.display();
	
	return 0;
}
