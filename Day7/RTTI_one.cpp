#include<iostream>
using namespace std;
class Course
{
public:
	virtual void start() = 0;
};
class Predac :public Course
{
public:
	void start()
	{
		cout << "starting predac" << endl;
	}
};
class Basic :public Course
{
public:
	void start()
	{
		cout << "starting basic" << endl;
	}
};
class Dac :public Course
{
public:
	void start()
	{
		cout << "starting Dac" << endl;
	}
	void orientation()
	{
		cout << "Welcome to Dac Orientation" << endl;
	}
};
void caller(Course* ptr)
{
	ptr->start();
	// here i want to check if ptr contains "Dac", then along with "start" i want to call "orientation" also
}
int main()
{
	caller(new Predac);
	caller(new Basic);
	caller(new Dac);
}