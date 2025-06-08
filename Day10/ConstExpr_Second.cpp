#include<iostream>
using namespace std;

class Number
{
private:
	int a, b;
public:
	Number(int a)
	{
		this->a = a;
		b = 0;
	}
	constexpr Number(int a, int b) :a(a), b(b)
	{
	}
	int getA()
	{
		return a;
	}
	int getB()
	{
		return b;
	}
};
int main()
{
	Number ref(1000);
	cout << ref.getA() << "\t" << ref.getB() << endl;
	Number n1(100,45);
	cout << n1.getA() << "\t" << n1.getB() << endl;
	constexpr Number n2(400, 500);
	//cout << n2.getA() << "\t" << n2.getB() << endl;
}