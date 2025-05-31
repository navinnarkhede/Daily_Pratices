//12) accept a name and print its length without using in built(strlen) function.

//hint = search /0 in this
#include<iostream>
using namespace std;
int main()
{
	char name[20];
	int length = 0;
	cout << "Enter the Name: ";

	cin.getline(name,20);
	
	cout << name;
	while (name[length] != '\0')
	{
		length++;
	}
	cout << "Length of this is " << length;
	return 0;
}