//7) accept from user how many chracters he has in his name, now allocate a memory accordingly and accept 
// his name.[use new operator]

#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter the number of characters in your name: ";
	cin >> n;
	char* name = new char[n + 1];
	cout << "Enter your name: ";
	cin >> name;
	cout << "Your name is: " << name << endl;
	delete[] name; 
	return 0;
}