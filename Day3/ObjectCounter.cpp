#include<iostream>
using namespace std;
class MyClass
{
private:
	static int cnt;
	int num;
public:
	MyClass()
	{
		num = 0;
		cnt++;
	}
	MyClass(int k)
	{
		num = k;
		cnt++;
	}
	static int getCount()
	{
		return cnt;
	}
	MyClass(MyClass& obj)
	{
		num = obj.num;
		cnt++;
	}
	~MyClass()
	{
		cnt--;
		cout << "destructor called" << endl;
	}
};
int MyClass::cnt = 0;
int main()
{
	MyClass m1, m2, m3(200), m4(300);
	MyClass m5(m3);
	MyClass m6 = m4;
	MyClass* m7 = new MyClass;
	MyClass* m8 = new MyClass(405);
	cout << MyClass::getCount()<<endl;
	delete m7;
	cout << MyClass::getCount() << endl;
	delete m8;
	cout << MyClass::getCount() << endl;

	return 0;
}