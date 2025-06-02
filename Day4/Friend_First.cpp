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

};
void disp(MyClass& ref)
{
	cout << ref.getNum() << endl;
}
int main()
{
	MyClass m(7);
	disp(m);
}