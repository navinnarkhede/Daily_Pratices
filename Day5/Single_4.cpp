#include<iostream>
using namespace std;
class Base
{
private:
	int num1=20;
public:
	void disp1()
	{
		cout << num1 << endl;
	}
	Base()
	{

	}
	Base(int num1)
	{
		this->num1 = num1;
	}
	~Base()
	{
		cout << "Base Destructor" << endl;
	}
};

class Sub :Base
{
private:
	int num2=30;
public:
	Sub()
	{
		cout << "No arg constr" << endl;
	}
	void disp2()
	{
		disp1();
		cout << num2 << endl;
	}
	~Sub()
	{
		cout << "Sub Destructor" << endl;
	}
};

int main()
{
	Sub s;		//base does not have no arg constru
	s.disp2();

	/*Base b(20);
	b.disp1();*/

	return 0;

}