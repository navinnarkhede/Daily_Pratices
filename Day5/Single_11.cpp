#include<iostream>
using namespace std;
class base
{
private:
	int num1;
public:
	void disp1()
	{
		cout << num1 << endl;
	}
	base(int num1)
	{
		this->num1 = num1;
		cout << "base param" << endl;
	}
	~base()
	{
		cout << "base destr" << endl;
	}
};
class sub1 :public base
{
private:
	int num2;
public:
	sub1() :base(0)
	{
		cout << "sub1 no-arg constr" << endl;
	}
	void disp2()
	{
		cout << num2 << endl;
	}
	~sub1()
	{
		cout << "sub1 destr" << endl;
	}
};
int main()
{
	sub1 s;
	s.disp2();
	s.disp1();
	return 0;
}