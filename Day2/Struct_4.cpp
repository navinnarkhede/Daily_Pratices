#include <iostream>
using namespace std;
struct Student
{
	char name[30] = "noname";
	int age = 0;
};
int main()
{
	Student* ptr;		// this is structure pointer
	cout << "How Many Records ?" << endl;
	int rec;
	cin >> rec;					//size of pointer 
	ptr = new Student[rec];		// it is used to add the multiple values in the strcuture it store the values in the form of array
								// add multiple structure blocks in it
	for (int i = 0; i < rec; i++)
	{
		cout << "Enter the Name and Age :- ";
		cin >> ptr[i].name >> ptr[i].age;			//getting the values in the pointer 
		cout << endl;		
	}
	
	for (int i = 0; i < rec; i++)
	{
		cout << "Name: " << ptr[i].name;			// printing the value on the console
		cout << "Age: " << ptr[i].age << endl;
	}
	return 0;
}