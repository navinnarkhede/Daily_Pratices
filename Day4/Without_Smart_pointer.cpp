#include<iostream>
using namespace std;
class Person
{
private:
	int age;
	char* pName;
public:
	Person() : pName(0), age(0)
	{

	}
	Person(const char* pName, int age)
	{
		this->pName = new char[strlen(pName) + 1];
		strcpy_s(this->pName, strlen(pName) + 1, pName);
		this->age = age;
	}
	~Person()
	{
		cout << "In Destructor" << endl;
		delete pName;
	}
	void display()
	{
		if (pName != NULL)
		{
			cout << pName << "\t" << age << endl;
		}
	}
	void shout()
	{
		cout<<"aaaaaaaaaaaaaaaaaaaaaaooooooooooo" << endl;
	}
};
int main()
{
	Person* pPerson = new Person("Scott", 25);
	pPerson->display();
	delete pPerson;
	return 0;
}