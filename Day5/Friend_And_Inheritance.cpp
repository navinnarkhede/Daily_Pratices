#include<iostream>
using namespace std;
class sub;
class base
{
private:
	int num1 = 10;
	friend void fun(base&, sub&);
};
class sub :public base
{
private:
	int num2 = 20;
	friend void fun(base&, sub&);
};
void fun(base& ref1, sub& ref2)
{
	cout << ref1.num1 << endl;
	sub s;
	cout << s.num2 << endl;     // base's friend is not sub's friend
}
int main()
{
	base b;
	sub s;
	fun(b, s);
}