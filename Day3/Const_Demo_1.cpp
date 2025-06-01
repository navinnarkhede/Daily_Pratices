#include<iostream>
using namespace std;
class MyClass
{
private:
	const int cnt = 9;
	/*const int cnt2;*/ //initilize itin the constructor
	int num = 20;
public:
	MyClass(int k)
	{
		num = k;
	}
	MyClass(int a, int b) :cnt(b)
	{
		num = a;
	}
	void disp()
	{
		//cnt++;	//Error
		num++;
		cout << num << "\t" << cnt << endl;
	}
	void myfun()const
	{
		//num++;	//error
		//cnt++;	//error
	}
};
int main()
{
	MyClass m1(100);
	m1.disp();
	m1.myfun();
	return 0;
}