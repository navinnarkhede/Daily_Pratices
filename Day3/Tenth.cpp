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
			cout << "in side def constructor but outside class\n";
		}
		MyClass(const char* str, int k)
		{
			name = new char[strlen(str) + 1];
			strcpy_s(name, strlen(str) + 1, str);
			age = k;
			cout << "in parameterized constructor\n";
		}
		~MyClass()
		{
			delete[]name;
			cout << "\ninside destructor\n";
		}
		void disp()
		{
			if (name != NULL)
				cout << name << "\t" << age << endl;
		}
};
int main()
{
	MyClass* m1 = new MyClass("Sachin", 25);
	m1->disp();
	delete m1;  // invoking destructor explicitly
	MyClass* m2 = new MyClass;
	m2->disp();
	//delete m2;  // destructor won't be called for "m2"
	return 0;
}