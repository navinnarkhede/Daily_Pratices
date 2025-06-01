#include<iostream>
using namespace std;

class MyClass
{
private:
	char* name;
	int age;
public:
	MyClass()
	{
		cout << "Inside default constructor" << endl;
	}
	MyClass(const char* str, int age)
	{
		name = new char[strlen(str) + 1];
		strcpy_s(name,strlen(str)+1,str);
		this->age = age;
	}
	~MyClass()
	{
		delete name;
		cout << "\n Inside Destructor \n" << endl;
	}
	void disp()
	{
		if (name != NULL)
		{
			cout << name << "\t" << age << endl;
		}
	}
	MyClass(const MyClass& ref)
	{
		name = new char[strlen(ref.name) +1];
		strcpy_s(name, strlen(ref.name) + 1, ref.name);
		this->age = ref.age;
		cout << "\nInside Copy Constructor\n" << endl;
	}
};
int main()
{
	MyClass m1("Sachin",20);
	m1.disp();
	MyClass m2 = m1;
	m2.disp();

	return 0;
}