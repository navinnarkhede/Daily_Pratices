#include<iostream>
#include<fstream>   // Required for file input/output
using namespace std;

int main()
{
    char ch;    // Variable to hold each character read from file

    // Create and open a file "Three.txt" for writing
    ofstream o("Three.txt");

    // Check if file is successfully opened for writing
    if (!o)
    {
        cout << endl << "File could not be opened for writing." << endl;
        return 0;   // Exit the program if file failed to open
    }

    // Write ASCII characters from 65 to 150 to the file
    for (int i = 65; i <= 150; i++)
    {
        o.put((char)i);  // Convert integer i to character and write to file
    }

    o.close();  // Close the file after writing

    // Open the same file "Three.txt" for reading
    ifstream in("Three.txt");

    // Check if file is successfully opened for reading
    if (!in)
    {
        cout << endl << "Cannot open file for reading." << endl;
        return 0;   // Exit the program if file failed to open
    }

    // Read each character one by one from file until end of file
    while (in.get(ch))
    {
        // Print each character on a new line
        cout << endl << ch << endl;
    }

    in.close();  // Close the file after reading

    return 0;   // Exit the program successfully
}
