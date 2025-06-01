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
	}
	int getNum()
	{
		return num;
	}
	~MyClass()
	{
		cout << "in destrcutor" << endl;
	}
	MyClass(MyClass& ref)
	{
		num = ref.num;
		cout << "In Copy Constrctor" << endl;
	}
	void disp(MyClass &temp)
	{
		cout << temp.getNum() << endl;
	}
};
int main()
{
	MyClass m1(200);
	cout << endl << m1.getNum() << endl;
	m1.disp(m1);

	return 0;
}