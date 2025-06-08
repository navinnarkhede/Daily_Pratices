//In C++11, a constructor may call another constructor 
// of the same class.

#include<iostream>
using namespace std;

class Data
{
private:
	static const int counter = 0;
public:
	Data(int num) :Data()  // delegating constructor
	{
		cout << "inside int constructor" << endl;
	}
	Data(double value) :Data()  // delegating constructor
	{
		cout << "inside double constructor" << endl;
	}
	Data(string str) :Data()  // delegating constructor
	{
		cout << "inside string constructor" << endl;
	}
	Data()  // target constructor
	{
		++counter;
	}
	static int getCounter()
	{
		return counter;
	}
	~Data()
	{
		--counter;
	}
};
int main()
{
	Data n1{ 12 };
	Data n2{ "welcome" };
	Data n3{ 9.8 };
	Data* n4 = new Data{ "hello" };
	cout << endl << "Number of objects created so far are\t" << Data::getCounter() << endl;
	delete n4;
	cout << endl << "Number of objects created so far are\t" << Data::getCounter() << endl;
}