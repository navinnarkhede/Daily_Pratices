#include<iostream>
using namespace std;
class base
{
public:
	void disp()
	{
		cout << "base disp" << endl;
	}
};
class sub :public base
{
public:
	void disp()
	{
		cout << "sub disp" << endl;
	}
};
int main()
{
	base b1;
	base& ref1 = b1;
	ref1.disp();
	sub s1;
	base& ref2 = s1;   // upcasting
	ref2.disp();
	return 0;
}