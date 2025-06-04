#include<iostream>
using namespace std;

class base
{
public:
	virtual void disp()
	{
		cout << "in base disp" << endl;
	}
	~base()
	{
		disp();
	}
};
class sub : public base
{
public:
	void disp()
	{
		cout << "in sub disp" << endl;
	}
};
int main()
{
	base* b = new sub;
	delete b;
}