#include<iostream>
using namespace std;
class Second;
class First
{
private:
	int num1;
public:
	First(int num1)
	{
		this->num1 = num1;
	}
	int getNum1()
	{
		return num1;
	}
	friend int compare(First&, Second&);
};

class Second
{
private:
	int num2;
public:
	Second(int num2)
	{
		this->num2 = num2;
	}
	int getNum2()
	{
		return num2;
	}

	friend int compare(First&, Second&);
};
int compare(First& f, Second& s)
{
	if (f.getNum1() > s.getNum2())
	{
		return 1;
	}
	else if (f.getNum1() < s.getNum2())
	{
		return -1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	First f(100);
	Second s(200);
	cout << compare(f, s) << endl;
	
	return 0;
}