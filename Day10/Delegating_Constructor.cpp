//In C++11, a constructor may call another constructor 
// of the same class.
#include<iostream>
using namespace std;

class Number
{
private:
	int num;
public:
	Number(int num) // target constructor
	{
		this->num = num;
	}
	Number() :Number(1)  // delegating constructor
	{

	}
	int getNum()
	{
		return num;
	}
};
int main()
{
	Number n1{ 12 };
	Number n2;
	cout << n1.getNum() << "\t" << n2.getNum() << endl;
	
	return 0;
}