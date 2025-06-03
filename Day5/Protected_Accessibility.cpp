#include<iostream>
/*
private and protected both differ only in case of inheritance
*/
using namespace std;
class MyClass
{
private:
	int num1;
protected:
	int num2;
public:
	MyClass(int num1, int num2)
	{
		this->num1 = num1;
		this->num2 = num2;
	}
	int getNum1()
	{
		return num1;
	}
	int getNum2()
	{
		return num2;
	}
};

int main()
{
	MyClass m1(100, 200);
	//cout << m1.num1 << endl;   //error
	//cout << m1.num2 << endl; //error
	cout << m1.getNum1() << endl;
	cout << m1.getNum2() << endl;
	return 0;
}
