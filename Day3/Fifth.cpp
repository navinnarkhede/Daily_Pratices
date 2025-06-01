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
	int req;
	cout << "Enter How Many Records \n";
	cin >> req;
	MyClass* m = new MyClass[req];
	int i, num;
	cout <<"Enter = "<<req <<"numbers \n";
	for (i = 0;i < req;i++)
	{
		cin >> num;
		m[i].setNum(num);
	}
	for (i = 0;i < req;i++)
	{
		cout << endl << m[i].getNum() << endl;
	}
	delete[]m;
	return 0;
}