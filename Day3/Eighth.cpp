#include<iostream>
using namespace std;

class MyClass
{
	private:
		int num;
	public:
		MyClass()
		{
			cout << "No Param Const" << endl;
		}
		MyClass(int n)
		{
			cout << "Para Const : " << n << endl;
		}
		~MyClass()
		{
			cout << "This is Destructor call" << endl;
		}
		void setNum(int num)
		{
			this->num = num;
		}
		int getNum()
		{
			return num;
		}
};
int main()
{
	MyClass m1;
	m1.setNum(100);
	cout<<m1.getNum()<< endl;

	MyClass m2(200);
	m2.setNum(300);
	cout << m2.getNum() << endl;

	return 0;
}