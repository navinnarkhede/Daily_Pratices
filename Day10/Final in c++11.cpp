#include<iostream>

using namespace std;

class A final
{
public:
	void virtual show(int a)
	{
		cout << a << endl;
	}
};
//class B :public A  // error
//{
//
//};
int main()
{
	cout << "Done" << endl;
	return 0;
}

