//3)create a class "MyClass1"
//with members and member function "disp1().
//create another class "MyClass2"
//with members and member function "disp2().
//now try to invoke disp1() from disp2()
//in the main() function, create instances of both the classes and invoke their member functions.
#include<iostream>
using namespace std;
class MyClass
{
private:
	int num1;
public:
	MyClass(int k)
	{
		num1 = k;
	}
	void disp1()
	{
		cout << "disp1 = " << num1 << endl;
	}
};
class MyClass2
{
private:
	int num2;
public:
	MyClass2(int k)
	{
		num2 = k;
	}
	void disp2(MyClass &obj)
	{
		cout << "disp2 = " << num2 << endl;
		obj.disp1();
	}
};

int main()
{
	MyClass m1(10);
	m1.disp1();

	MyClass2 m2(20);
	m2.disp2(m1);

	return 0;
}