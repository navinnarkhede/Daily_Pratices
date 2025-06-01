#include<iostream>
using namespace std;

class MyClass
{
private:
	int num;
public:
	MyClass(int num)
	{
		this->num = num;
		cout << "Para constru : num  =  " << this->num << endl;
	}
	~MyClass()
	{
		cout << "Destructor Constru : num  = " << num << endl;
	}
};
int main()
{
	MyClass m1(10);
	MyClass m2(20);
	
	MyClass* m3 = new MyClass(15);

	delete m3;

	return 0;
}