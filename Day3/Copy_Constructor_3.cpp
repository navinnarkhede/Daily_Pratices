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
		cout << "Default const" << endl;
	}
	~MyClass()
	{
		cout << "In destructor" << endl;
	}
	MyClass(MyClass& ref)
	{
		cout << "in copy const" << endl;
		this->num = ref.num;
	}
};
int main()
{
	MyClass m;
	m.setNum(188);
	cout << endl << m.getNum() << endl;
	MyClass m1 = m;
	cout << m1.getNum();
}