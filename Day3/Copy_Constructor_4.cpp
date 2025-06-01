#include<iostream>
using namespace std;
class MyClass
{
private:
	char* name;
	int age;
public:
	MyClass(const char* str, int age)
	{
		name = new char[strlen(str) + 1];
		strcpy_s(name, strlen(str) + 1, str);
		this->age = age;
		cout << "Parameterized Constrcutor " << endl;
	}
	~MyClass()
	{
		delete[]name;
		cout << "Inside Destructor" << endl;
	}
	void disp()
	{
		if (name != NULL)
			cout << name << "\t" << age;
	}
};
int main()
{
	MyClass m1("SACHIN", 25);
	m1.disp();
	MyClass m2 = m1;
	m2.disp();

	return 0;
}