#include<iostream>
using namespace std;
class MyClass
{
	private:
		int num;
	public:
		void setNum(int);
		int getNum();
		MyClass()
		{
			cout << "In Default Constructor"<<endl;
		}
		MyClass(int k)
		{
			cout << "In Parametarized Constrcutor " << k <<endl;
		}
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
	MyClass m;
	m.setNum(200);
	cout << endl << m.getNum() << endl;
	MyClass m1(45);			// parameterized constructor get called
	m1.setNum(29);
	cout << endl << m1.getNum() << endl;	// it will print any garbage value
	return 0;
}