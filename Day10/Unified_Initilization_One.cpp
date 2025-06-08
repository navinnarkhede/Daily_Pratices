//Initialization of dynamically allocated arrays: 


// C++ program to demonstrate initialization
// of dynamic array in C++ using uniform initialization


#include <iostream>
using namespace std;
int main()
{
    // declaring a dynamic array
    // and initializing using braces
    int* pi = new int[5] { 1, 2, 3, 4, 5 };

    // printing the contents of the array
    for (int i = 0; i < 5; i++)
        cout << *(pi + i) << " ";
}

/*

in old versions we had to write the code in the following way:

// Allocate memory for an array of 5 integers
    int* pi = new int[5];

    // Initialize the array elements
    pi[0] = 1;
    pi[1] = 2;
    pi[2] = 3;
    pi[3] = 4;
    pi[4] = 5;

*/