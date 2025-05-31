//1) store value 20 inside "num" variable.
//create a pointer to this variable.print the value of "num" using pointer.
//increment the pointer by 2 and show with the diagram what happens.

#include <iostream>
using namespace std;
int main() {
	int num = 20; // Step 1: Declare and initialize an integer variable
	int* ptr = &num; // Step 2: Create a pointer to the variable num
	*ptr += 2; // Step 3: Increment the value pointed to by ptr by 2
	//ptr++; // Increment the pointer itself by 2 (this is not typical usage, but for demonstration)
	cout << "Value of num: " << num << endl; // Step 4: Print the value of num using the pointer
}