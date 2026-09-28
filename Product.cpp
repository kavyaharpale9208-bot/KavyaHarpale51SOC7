#include<iostream>
#include<string>
using namespace std;

class Product
{
	public:
	int Product_Id;
	string Product_name;
	float Price;
	int MonthlySale[12];

	void GetInfo()
	{
		cout<<"Enter product Id:";
		cin>>Product_Id;
		cout<<"Enter Product Name:";
		cin>>Product_name;
		cout<<"Enter Product Price:";
		cin>>Price;
		cout<<"Enter monthly sales:";
		for(int i=0;i<12;i++)
		{
			cout<<"Month:"<<i+1<<endl;
			cin>>MonthlySale[i];
		}
	}
	int Total_Quantity()
	{
		int total=0;
		for(int i=0;i<12;i++)
		{
			total=total+MonthlySale[i];
		}
		return total;
		}
		float Bill()
		{
			return Total_Quantity()*Price;
		}
		
		void Display()
		{
		cout<<"Product Id  :"<<Product_Id<<endl;
		cout<<"Product Name:"<<Product_name<<endl;
		cout<<"Product Price:"<<Price<<endl;
		cout<<"Total Quantity:"<<Total_Quantity()<<endl;
		cout<<"Total Bill    :"<<Bill()<<endl;
		}
	};

	int main()
	{
		int number;
		cout<<"Enter number of Products:";
		cin>>number;

		Product P[number];
		for(int i=0;i<number;i++)
		{
			cout<<"Enter Product details for product:"<<i+1<<endl;
			P[i].GetInfo();
		}
		cout<<"=======All product Details:===="<<endl;
		cout<<"==============================="<<endl;
		for(int i=0;i<number;i++)
		{
			cout<<"Details of product:"<<i+1<<endl;
			P[i].Display();
		cout<<"==============================="<<endl;

		}
		return 0;
}

