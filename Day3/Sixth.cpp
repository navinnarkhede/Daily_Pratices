#include<iostream>
using namespace std;
class MyClass
{
private:
	int num;
public:
	void setNum(int);
	int getNum();
	MyClass()
	{
		num = 0;
		cout << "\nInside Default Constructor\n";
	}
};

void MyClass::setNum(int num)
{
	this->num = num;
}

int MyClass::getNum()
{
	return num;
}

int main()
{
	MyClass m;
	m.setNum(100);
	cout << endl << m.getNum() << endl;
}