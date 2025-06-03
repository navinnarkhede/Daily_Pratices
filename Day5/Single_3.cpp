#include<iostream>
using namespace std;
class Base
{
private:
	int num1 = 10;
public:
	Base()
	{
		cout << "No arg constructor of Base" << endl;
	}
	void disp1()
	{
		cout << "num in base = " << num1 << endl;
	}
	~Base()
	{
		cout << "Base Destructor" << endl;
	}
};
class Sub :Base
{
private:
	int num2 = 20;
public:
	Sub()
	{
		cout<<"No arg Constructor of Sub" << endl;
	}
	void disp2()
	{
		cout << "num in sub = " << num2 << endl;
	}
	~Sub()
	{
		cout << "Sub Destructor" << endl;
	}
};
int main()
{
	Sub s;
	s.disp2();
	//s.disp1();	//error

	Base b;
	b.disp1();
	//b.disp2();		//error


	return 0;
}