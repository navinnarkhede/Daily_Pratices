#include<iostream>
using namespace std;
class Second;
class First
{
private:
	int a;
public:
	First(int k)
	{
		this->a = k;
	}
	friend class Second;
};
class Second
{
public:
	void fun1(First f1)
	{
		cout << "First a value in Fun1 = " << f1.a << endl;
	}
	void fun2(First f2)
	{
		cout << "First a value in Fun2 = " << f2.a << endl;
	}
	void fun3(First f3)
	{
		cout << "First a value in Fun3 = " << f3.a << endl;
	}
};

int main()
{
	First f1(10);
	First f2(20);

	Second s1;
	s1.fun1(f1);
	s1.fun2(f1);
	s1.fun2(f1);

	s1.fun1(f2);
	s1.fun2(f2);
	s1.fun2(f2);

	return 0;
}
