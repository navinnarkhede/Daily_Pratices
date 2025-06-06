#include<fstream>
#include<iostream>
using namespace std;
int main()
{
	string str;
	ofstream out("Demo.txt");   // Create an output file stream object	
	if (!out)		// Check if the file was opened successfully
	{
		cout << "File could not be opened for writing." << endl;		// Display an error message
		return 0;
	}
	out << "I Am Navin, Currently I am pursuing CDAC PG-DAC at SM VITA Collage ,Juhu ,Mumbai" << endl;		// Write a string to the file
	out.close(); // Close the file after writing

	ifstream in("Demo.txt");  // Create an input file stream object
	if (!in)		// Check if the file was opened successfully
	{
		cout << "File could not be opened for reading." << endl;		// Display an error message
		return 0;
	}
	in >> str; // Read a string from the file
	in.close(); // Close the file after reading
	cout << "Read from file: " << str << endl; // Display the read string
	return 0;
}