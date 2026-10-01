#include<iostream>
#include<string>
using namespace std;

class Employee
{
private:
int empId;
string name;
float basicsalary;
float bonus;
float totalsalary;

public:
Employee()
{
empId=0;
name="unknown";
basicsalary=0;
bonus=0;
totalsalary=0;

cout<<"The default constructor is called:"<<endl;
}

Employee(int id, string n, float s, float b)
{
empId=id;
name=n;
basicsalary=s;
bonus=b;

calculate_totalsalary();
cout<<"The parameterize constructor is called:"<<endl;
}
void calculate_totalsalary()
{
	totalsalary=basicsalary + bonus;
}

void display()
{
	cout<<"\n.......Employee Details......."<<endl;
	cout<<"Employee Id:"<<empId<<endl;
	cout<<"name:"<<name<<endl;
	cout<<"Basic salary:"<<basicsalary<<endl;
	cout<<"Bonus:"<<bonus<<endl;
	cout<<"Total salary:"<<totalsalary<<endl;
}
};

int main()
{
	Employee e1;
	e1.display();

	Employee e2(123, "Jolly" , 50000 , 10000 );
	e2.display();
	return 0;;
}
