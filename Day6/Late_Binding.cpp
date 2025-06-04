#include<iostream>
using namespace std;
class base
{
public:
	virtual void disp() // overridden
	{
		cout << "base disp" << endl;
	}
};
class sub :public base
{
public:
	void disp() // overriding 
	{
		cout << "sub disp" << endl;
	}
};

int main()
{
	base* ptr = new base;
	ptr->disp();  // content will be considered
	ptr = new sub;    // upcasting
	ptr->disp();  // content will be considered
	return 0;
}