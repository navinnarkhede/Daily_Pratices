////accept two numbers and swap them without using third variable.

#include <iostream>
using namespace std;
int main() 
{
	int num1, num2;
	cout << "Enter two numbers: ";
	cin >> num1 >> num2;
	int* ptr1 = &num1, * ptr2 = &num2;
	cout << "Before swapping: " << num1 << " " << num2 << endl;
	//num1 = *ptr1 + *ptr2;
	//num2 = *ptr1 - *ptr2; // num2 = num1 + num2 - num2 = num1
	//num1 = *ptr1 - *ptr2; // num1 = num1 + num2 - num2 = num1
	
	num1 = *ptr1 ^ *ptr2; // num1 = num1 ^ num2
	num2 = *ptr1 ^ *ptr2; // num2 = num1 ^ num2 ^ num1 = num2
	num1 = *ptr1 ^ *ptr2; // num1 = num1 ^ num2 ^ num2 = num1
	cout << "After swapping: " << num1 << " " << num2 << endl;
	return 0;
}