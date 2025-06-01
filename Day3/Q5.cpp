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
		cnt++;
	}
	MyClass(int num)
	{
		this->num = num;
		cnt++;
	}
	MyClass(MyClass& ref)
	{
		this->num = ref.num;
		cnt++;
	}
	void disp()
	{
		cout<<cnt<<endl;
	}
};
int MyClass::cnt = 0;
int main()
{
	int rec = 3;
	MyClass m1, m2(20), m3(300);
	MyClass m4 = m2;
	MyClass m5 = m1;
	MyClass* m = new MyClass[rec];

	m->disp();
	return 0;
}