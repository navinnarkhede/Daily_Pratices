#include<iostream>
using namespace std;

class MyClass
{
public:
	MyClass()
	{
		cout << "Constructor" << endl;
	}
	~MyClass()
	{
		cout << "Destructor" << endl;
	}
	void disp()
	{
		cout << "disp" << endl;
	}
};

int main()
{
	int n;
	cout << "Enter size of dynamic array " << endl;
	cin >> n;

	MyClass *arr = new MyClass[n];
	for (int i = 0;i < n;i++)
	{
		arr[i].disp();
	}
	delete[]arr;
	return 0;
}