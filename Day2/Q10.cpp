//10)define 3 different structures and initialize their members.now write 3 different functions, but with the same name.
//these functions will accept each structure respectively and display their members.

#include <iostream>
using namespace std;
struct Student
{
	int rollNo;
	char name[20];
};
struct Book
{
	char title[20];
	char author[20];
};
struct Car
{
	char brand[20];
	int year;
};
void display(Student s)
{
	cout << "Roll No: " << s.rollNo << endl;
	cout << "Name: " << s.name << endl;
}
void display(Book b)
{
	cout << "Title: " << b.title << endl;
	cout << "Author: " << b.author << endl;
}
void display(Car c)
{
	cout << "Brand: " << c.brand << endl;
	cout << "Year: " << c.year << endl;
}	
int main()
{
	Student s = { 1,"Navin" };
	Book b = {"Book My show","James Gosling"};
	Car c = {"Bretling",2002};

	display(s);
	display(b);
	display(c);

	return 0;
}