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
	sub s1;
	base b1;
	base* ptr;
	ptr = &b1;
	ptr->disp();
	ptr = &s1;     // upcasting
	ptr->disp();
	return 0;
}