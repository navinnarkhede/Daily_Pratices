#include<iostream>
using namespace std;;
struct Student
{
	char name[20] = "noname";
	int age = 0;			// this allowed in new version
							//in old version it is not allowed
};
int main()
{
	Student s1;				// structure varible
	
	strcpy_s(s1.name,"abc")		// this are corrupting our data
	s1.age = 16;
	cout << s1.name << "\t" << s1.age << endl;

	s1.age = -5;		// risk of data corruption 
						// original data is modified here
	cout << s1.name << "\t" << s1.age << endl;
}
