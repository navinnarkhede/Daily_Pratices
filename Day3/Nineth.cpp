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
			cout << "No args Const" << endl;
		}
		MyClass(const char* str, int k)
		{
			name = new char[strlen(str) + 1];		// Allocate memory for name on the heap
			strcpy_s(name,strlen(str)+1,str);
			age = k;
			cout << "In parameterized Constructor \n";
		}
		~MyClass()
		{
			delete[]name;
			cout << "\n Inside Destructor \n";
		}
		void disp()
		{
			if (name != NULL)
				cout << name << "\t" << age;
			else
				cout << age << endl;
		}
};
int main()
{
	MyClass m1("sachin", 25);	//stack based object
	m1.disp();
	MyClass m2;
	m2.disp();
}