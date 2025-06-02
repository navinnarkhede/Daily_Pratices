#include<iostream>
using namespace std;
class MyClass
{
private:
	int num;
public:
	MyClass()
	{

	}
	MyClass(int num)
	{
		this->num = num;
	}
	int getNum()
	{
		return num;
	}
	MyClass add(MyClass& b)
	{
		return MyClass(num + b.num);
	}

};
int main()
{
	MyClass m1(100), m2(200), m3;
	cout << m1.getNum() << endl;
	cout << m2.getNum() << endl;
	m3 = m1.add(m2);
	
	cout << m3.getNum() << endl;

	return 0;
}