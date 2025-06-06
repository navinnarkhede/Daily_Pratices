#include<iostream>
#include<fstream>
using namespace std;
class Student
{
private:
	int rollno;
	char name[20];
	int age;
public:
	Student(int rollno, const char* name, int age)
	{
		this->rollno = rollno;
		strcpy_s(this->name, strlen(name) + 1, name);
		this->age = age;
	}
	Student()
	{
		rollno = 0;
		age = 0;
	}
	char* getName()
	{
		return name;
	}
	int getAge()
	{
		return age;
	}
	friend ostream& operator<<(ostream&, Student&);
};
ostream& operator<<(ostream& o, Student& ref)
{
	o << ref.rollno << "\t" << ref.name << "\t" << ref.age << endl;
	return o;
}
fstream f("trial.txt", ios::in | ios::app);
void add()
{
	Student s1(1, "abc", 25);
	cout << s1 << endl;
	f.write((char*)&s1, sizeof(s1)); // serialization
}
int main()
{
	cout << "Before invoking add" << endl;
	add();
	cout << "After invoking add" << endl;
	f.seekg(0, ios::beg);
	Student temp;
	f.read((char*)&temp, sizeof(temp)); // deserialization
	f.close();
	cout << temp << endl;
	return 0;
}

