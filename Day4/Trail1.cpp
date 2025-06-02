// Given the following code, at "here" define a member function in such a way 
// which will add m1's num and m2's num and display the result.

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
	void add(MyClass& b)
	{
		cout << num + b.num << endl;
	}
};
int main()
{
	MyClass m1(100), m2(200);
	cout << m1.getNum() << endl;
	cout << m2.getNum() << endl;
	m1.add(m2);
	return 0;
}