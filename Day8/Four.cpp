#include<fstream>
#include<iostream>
using namespace std;

/*
istream& read(char* buffer, streamsize num)
    - Reads `num` characters from the input stream into `buffer`.

ostream& write(const char* buffer, streamsize num)
    - Writes `num` characters from `buffer` to the output stream.

streamsize:
    - Defined in the C++ standard library.
    - An integer type that can represent the largest possible number of characters
      that can be transferred in one I/O operation.
*/

int main()
{
    size_t total = 0;  // To keep track of total bytes read from file

    // Define a structure 'emp' with name and age
    struct emp
    {
        char name[20];
        int age;
    };

    // Initialize an array of 3 employees
    emp e[3] = { {"abc", 30}, {"xyz", 26}, {"lmn", 10} };
    emp e1;  // Object to store employee data while reading

    // Open file "four.txt" in binary write mode
    ofstream o("four.txt", ios::binary);

    // Write all employee objects to file at once using binary write
    o.write((char*)&e, sizeof(e));
    o.close();  // Close the output file

    // Open same file in binary read mode
    ifstream i("four.txt", ios::binary);

    // Read employee objects one by one until end of file
    while (i.read((char*)&e1, sizeof(emp)))
    {
        // Print name and age of each employee
        cout << e1.name << "\t" << e1.age << endl;

        // gcount() returns number of characters extracted in last read operation
        total += i.gcount();
    }

    cout << endl << "after reading\n";
    i.close();  // Close input file

    cout << endl << "no of chrs read\t" << total << endl;  // Total bytes read

    return 0;
}
