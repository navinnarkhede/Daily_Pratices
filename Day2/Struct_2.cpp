#include <iostream>
using namespace std;
struct Student
{
	private:
		char name[20] = "noname";
		int age = 11;
};
int main()
{
	Student s1;
	strcpy_s(s1.name,"navin");		//structure members are private you cannot access it directly because
									//you use access specifier to limit there scope for accessing that value 
									// you need to use getter setter methods
	s1.age = 14;
	cout << "name : " << s1.name << " age: " << s1.age << endl;
}