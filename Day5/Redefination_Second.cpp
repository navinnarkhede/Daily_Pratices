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
class sub : public base
{
public:
	void disp()
	{
		cout << "sub Disp" << endl;
	}
};
int main()
{
	sub s;
	s.disp();
	s.base::disp();
}