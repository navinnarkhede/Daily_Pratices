#include<iostream>
using namespace std;
class Person
{
private:
	char name[20];
	char address[20];
	int age;

public:
	void getdata() {
		cout << "Enter name: ";
		cin.getline(name, 20);
		cout << "Enter age: ";
		cin >> age;
		cout << "Enter address:	";
		cin.ignore(numeric_limits<streamsize> :: max(),'\n');
		cin.getline(address, 20);
	}
	void display() {
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
		cout << "Address: " << address << endl;
	}
};
int main()
{
	Person p;
	p.getdata();
	p.display();
	return 0;
}