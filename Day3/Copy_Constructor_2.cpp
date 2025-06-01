#include<iostream>
using namespace std;
class MyClass
{
private:
	int num;
public:
	void setNum(int k)
	{
		num = k;
	}
	int getNum()
	{
		return num;
	}
	MyClass()
	{
		cout << "No arg Constructor" << endl;
	}
	~MyClass()
	{
		cout << "In Destructor" << endl;
	}
	MyClass(MyClass& ref)
	{
		cout << "In copy constructor" << endl;
	}
};

int main()
{
	MyClass m;
	m.setNum(20);
	cout << m.getNum() << endl;
	MyClass m1(m);
	cout << m1.getNum() << endl;

	return 0;
}