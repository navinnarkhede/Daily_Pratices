#include<iostream>

using namespace std;

class A
{
public:
	void virtual show(int a) final
	{
		cout << a << endl;
	}
};
class B :public A
{
//public:
//	void show(int k)   // error , final method cannot be overridden
//	{
//		cout << "inside B's show\t" << k << endl;
//	}
//};
int main()
{
	A* ptr = new B;
	ptr->show(10);
	cout << "Done" << endl;
	return 0;
}

