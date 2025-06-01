#include<iostream>
using namespace std;
class MyClass
{
	private:
		int num;
	public:
		void setNum(int);
		int getNum();
};
void MyClass::setNum(int num)
{
	this->num = num;
}
int MyClass::getNum()
{
	return num;
}
int main()
{
	MyClass m1;
	MyClass m2;
	m1.setNum(18);
	m2.setNum(40);
	cout << m1.getNum() << endl;
	cout << m2.getNum() << endl;
	return 0;
}