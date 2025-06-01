#include<iostream>
using namespace std;
class MyClass
{
private:
	int num;
public:
	MyClass()
	{
		cout << "no-arg constructor" << endl;
	}
	MyClass(int num)
	{
		this->num = num;
		cout << "one param constructor" << endl;
	}
	~MyClass()
	{
		cout << "inside destructor\t" << num << endl;
	}
	void disp()
	{
		cout << num << endl;
	}
};

int main()
{
	MyClass m1;
	MyClass m2(200);
	MyClass* m3 = new MyClass;
	MyClass* m4 = new MyClass(400);
	MyClass();  // anonymous object on stack
	new MyClass; // anonymous object on heap
	new MyClass(300);  // anonymous object on heap

	delete m3;
	delete m4;
}