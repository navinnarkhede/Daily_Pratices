#include<iostream>
using namespace std;
struct Student
{
	char name[30] = "noaname";
	int age = 0;
};
int main()
{
	Student s1 = { "abc",25 };			//directly set the values
	Student* ptr1 = &s1;				// struture pointer assign the address of struct  variable
	cout << s1.name << "\t" << s1.age << endl;			//directly access the value of struct
	cout << ptr1->name << "\t" << ptr1->age << endl;	//access the values using structure poinnter 
	cout << (*ptr1).name << "\t" << (*ptr1).age << endl;	//access the values using structure pointer
	Student arr[3] = { {"xyz",25},{"efg",35},{"abc",23} };	//assigning the multiple values to the structure
	for (int i = 0; i < 3; i++)
	{
		cout << arr[i].name << "\t" << arr[i].age << endl;		// iterate the structure for printing
	}
}