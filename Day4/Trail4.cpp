
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
	friend MyClass add(MyClass&, MyClass&);
};
MyClass add(MyClass& ref1, MyClass& ref2)
{
	return MyClass(ref1.num + ref2.num);
}

int main()
{
	MyClass m1(100), m2(200),m3;
	cout << m1.getNum() << endl;
	cout << m2.getNum() << endl;
	m3 = add(m1,m2);
	cout << m3.getNum() << endl;
	return 0;
}