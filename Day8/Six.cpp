//// Random Access File Program in C++
//#include<fstream>
//#include<iostream>
//using namespace std;
//
//int main()
//{
//    // Open a file for both input and output, and truncate (clear) it if it already exists
//    fstream ff("fourth.txt", ios::in | ios::out | ios::trunc);
//
//    // Define structure to hold employee data
//    struct emp
//    {
//        char name[20];
//        int age;
//    };
//
//    // Create and initialize an array of employees
//    emp e[3] = { {"abc", 30}, {"xyz", 25}, {"lmn", 10} };
//    emp e1;  // Object to store data while reading
//
//    // Display total size in bytes (3 * size of one struct)
//    cout << sizeof(e) << endl;
//
//    // Write the entire array to the file in binary form
//    ff.write((char*)e, sizeof(e));
//
//    // Move the file's get pointer to the beginning for reading
//    ff.seekg(0, ios::beg);
//
//    // Read and display employee records one by one
//    while (ff.read((char*)&e1, sizeof(e1)))
//    {
//        cout << e1.name << "\t" << e1.age << endl;
//    }
//
//    cout << "lets read again!" << endl;
//
//    // IMPORTANT: After reaching EOF, clear the EOF flag to reuse the stream
//    ff.clear();  // Without this, the second read won't happen!
//
//    // Move the get pointer to beginning again
//    ff.seekg(0, ios::beg);
//
//    // Re-read and display employee records again
//    while (ff.read((char*)&e1, sizeof(e1)))
//    {
//        cout << e1.name << "\t" << e1.age << endl;
//    }
//
//    ff.close();  // Close the file
//    return 0;
//}
