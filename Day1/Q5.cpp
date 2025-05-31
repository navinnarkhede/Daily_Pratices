//5) Given
//void disp(int, int*);
//write a program to define above function and invoke it.

#include <iostream>
using namespace std;

int main() {  
	int n = 5;
	void disp(int, int*);
	int arr[] = { 1, 2, 3, 4, 5 };
	disp(n, arr);
	return 0;
}
void disp(int num, int* ptr)
{
	cout << "Number: " << num << endl;
	cout << "Array[0]: " << *ptr << endl;
}