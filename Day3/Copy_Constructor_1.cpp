#include<iostream>
using namespace std;

class MyClass
{
private:
	int num;
public:
	void setNum(int num)
	{
		this->num = num;
	}
	int getNum()
	{
		return num;
	}
	MyClass()
	{
		cout << "No Arg Constructor" << endl;
	}
	~MyClass()
	{
		cout << "In Destructor" << endl;
	}
};
int main()
{
	MyClass m;
	m.setNum(100);
	cout << endl << m.getNum() << endl;
	MyClass m1 = m;			//1st way to create copy 
	MyClass m2(m1);			//2nd way to create copy
	cout << m1.getNum() << endl;
	return 0;
}