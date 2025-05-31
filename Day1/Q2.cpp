////2) accept two numbers from the user and with the help of pointers perform following arithmetic operations :
////+-*/
////[diagram compulsory]
#include<iostream>
using namespace std;
int main()
{
	int num1, num2, sum, sub, mul, div;
	cout << "Enter two numbers: ";
	cin >> num1 >> num2;
	int *ptr1 = &num1;
	int * ptr2 = &num2;
	sum = *ptr1 + *ptr2;
 
	sub = *ptr1 - *ptr2;
	mul = *ptr1 * *ptr2;
	div = *ptr1 / *ptr2;
	cout << "Sum: " << sum << endl;
	cout << "Subtraction: " << sub << endl;
	cout << "Multiplication: " << mul << endl;
	cout << "Division: " << div << endl;
	return 0;
}