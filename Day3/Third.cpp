#include<iostream>
using namespace std;
class MyClass
{
	private:
		int num;
	public:
		inline void setNum(int);
		int getNum();
};
inline void MyClass::setNum(int k)
{
	this->num = k;
}
int MyClass::getNum()
{
	return num;
}
int main()
{
	MyClass m[3];			// array of objects
	int i, num;
	cout << "Enter the values \n";

	for (int i = 0;i < 3;i++)
	{
		cin >> num;
		m[i].setNum(num);
	}
	for (int i = 0;i < 3;i++)
	{
		cout << endl << m[i].getNum() << endl;
	}

	return 0;
}