#include<iostream>
using namespace std;

class Second;

class First
{
private:
	char str1[20];
public:
	First(const char* str)
	{
		strcpy_s(str1, str);
	}
	friend void combineStr(First, Second);
};

class Second
{
private:
	char str2[20];
public:
	Second(const char* str)
	{
		strcpy_s(str2, str);
	}
	friend void combineStr(First, Second);
};

// Friend function to combine and display strings
void combineStr(First f, Second s)
{
	char combined[50];
	strcpy_s(combined, f.str1);
	strcat_s(combined, s.str2);
	cout << "Combined String: " << combined << endl;  // <-- Display output
}
  
int main()
{
	First f1("Hello ");
	Second s1("World");
	combineStr(f1, s1);

	return 0;
}
