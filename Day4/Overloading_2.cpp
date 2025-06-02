#include<iostream>
using namespace std;
class MyClass
{
private :
	int num;
public:
	MyClass()
	{
		num = 0;
	}
	MyClass(int k)
	{
		num = k;
	}
	void disp()
	{
		cout << endl << num << endl;
	}
	MyClass operator+=(MyClass& ref)
	{
		this->num += ref.num;
		return *this;
	}
};
int main()
{
	MyClass m1(199);
	MyClass m2(99);
	m1.disp();
	m2.disp();
	MyClass m3;
	m3 += m1;
	m3 += m2;
	m3.disp();
	return 0;
}