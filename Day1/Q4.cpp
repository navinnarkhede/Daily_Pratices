//4) write "Call By Address" program[using pointer]
#include <iostream>
using namespace std;
int add(int* ptr1, int* ptr2)
{
	int sum = *ptr1 + *ptr2;
	return sum;
}
int main()
{
	int num1, num2;
	cout << "Enter two numbers: ";
	cin >> num1 >> num2;
	cout << "sum of " << num1 << " and " << num2 << " is: " << add(&num1, &num2) << endl;
	return 0;
}