#include<iostream>
using namespace std;
struct Employee
{
	int id;
	char name[20];
	char designation[20];
};
void setData(int rec, Employee* emp)
{
	for (int i = 0; i < rec; i++)
	{
		cout << "Enter the employee ID: ";
		cin >> emp[i].id;
		cout << "Enter the employee name: ";
		cin >> emp[i].name;
		cout << "Enter the employee designation: ";
		cin >> emp[i].designation;
	}
}
void getData(int rec, Employee* emp)
{
	for (int i = 0; i < rec; i++)
	{
		cout << "\n Emp Id =" << emp[i].id << endl;
		cout << " Emp Name =" << emp[i].name << endl;
		cout << " Emp Designation =" << emp[i].designation << endl;
	}
}
int main()
{
	int rec;
	cout << "Enter the number of records: ";
	cin >> rec;
	Employee *emp = new Employee[rec];
	setData(rec,emp);
	getData(rec, emp);

	delete[]emp;
}