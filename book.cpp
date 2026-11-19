#include<iostream>
#include<string>
using namespace std;

class Book
{
public:
int book_ID;
string book_name;
Book(int b_id,string b_name)
{
book_ID=b_id;
book_name=b_name;
}
Book(Book&b)
{
book_ID=b.book_ID;
book_name=b.book_name;
}
void display()
{
cout<<"The Book ID is :"<<book_ID<<endl;
cout<<"The Name of the Book is:"<<book_name<<endl;
}
};
int main()
{
Book b1(22062008,"Harry Potter");
Book b2(b1);
b1.display();
b2.display();

return 0;
}