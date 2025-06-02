#include<iostream>
using namespace std;
class Second;
class First
{
private:
	int num1;
public:
	First(int num1)
	{
		this->num1 = num1;
	}
	int getNum1()
	{
		return num1;
	}
	void fun(Second&);
};
class Second
{
private:
	int num2;
public:
	Second(int num2)
	{
		this->num2 = num2;
	}
	int getNum2()
	{
		return num2;
	}
	friend void First::fun(Second&);
};
void First::fun(Second& ref)
{
	cout << ref.num2 << endl;
}

int main()
{
	First f1(100);
	Second s2(200);
	cout << f1.getNum1() << endl;
	cout << s2.getNum2() << endl;

	return 0;
}