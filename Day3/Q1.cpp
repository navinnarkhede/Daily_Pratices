#include<iostream>
using namespace std;
class MyClass
{
private: 
	int num;
public:
	MyClass()
	{
		cout << "def construtor call" << endl;
	}
	
	MyClass(int num)
	{
		this->num = num;
	}

	~MyClass()
	{
		cout << "Destructor called" << endl;
	}
	
	int show() 
	{
		return num;
	}
};
int main()
{
	MyClass m[3] = {MyClass(10),MyClass(20),MyClass(30)};
	for (int i = 0;i < 3;i++)
	{
		cout << "Output : " << m[i].show() << endl;
	}
	return 0;
}