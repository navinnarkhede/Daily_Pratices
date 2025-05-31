#include<iostream>
using namespace std;
struct Student
{
	private:
		char name[20] = "noname";
		int age = 0;
	public: 
		void setName(const char* ptr)		// use constant char pointer to setting a value of character
		{
			strcpy_s(name, ptr);
		}
		char* getName()				// it will return the value of the main function where it called and after that print it
		{
			return name;
		}
		void setAge(int a)
		{
			age = a;
		}
		int getAge()
		{
			return age;
		}
};
int main()
{
	Student s1;
	s1.setName("Navin");
	cout << s1.getName()<<endl;
	s1.setAge(20);
	cout << s1.getName()<< "\t" << s1.getAge();

	return 0;
}