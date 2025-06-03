#include<iostream>
using namespace std;
class base
{
private:
	int num = 10;
public:
	void disp1()
	{
		cout << "Inside disp1 = " << num << endl;
	}
};

class sub :base
{
private:
	int num = 20;
public:
	void disp2()
	{
		cout <<"Inside disp2 = "<< num << endl;
	}
};
int main()
{
	sub s;
	s.disp2();
	//s.disp1();	//error
	
	base b;
	b.disp1();
	//b.disp2();		//error
	
return 0;
}