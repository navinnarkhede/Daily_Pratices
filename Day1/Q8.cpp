////8) ask user how many numbers he would like to store and using DMA allocate the memory for the same[diagram compulsory]
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "How many numbers do you want to store? ";
    cin >> n;

    // Dynamic Memory Allocation
    int* arr = new int[n];

    cout << "Enter " << n << " numbers:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "You entered:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    // Free memory
    delete[] arr;

    return 0;
}