// Given the following code, at "here" define a function in such a way which will add m1's num and m2's num and display the result.

#include<iostream>
using namespace std;

class MyClass
{
private:
	int num;
public:
	MyClass(int num)
	{
		this->num = num;
	}
	int getNum()
	{
		return num;
	}
	friend void add(MyClass&, MyClass&);
};
void add(MyClass& a, MyClass& b)
{
	cout << a.num + b.num;
}
int main()
{
	MyClass m1(100), m2(200);
	cout << m1.getNum() << endl;
	cout << m2.getNum() << endl;
	add(m1, m2);
	return 0;
}