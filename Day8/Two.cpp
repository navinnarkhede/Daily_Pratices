//#include<iostream>
//#include<fstream>
//#include<cstring>  // Required for strlen
//using namespace std;
//
//int main()
//{
//    char str[90];  // Declare a character array to hold input strings
//    ofstream of("Two.txt");  // Open a file named "Two.txt" for writing
//
//    cout << "Enter lines, Press Enter on empty line to stop:\n";
//
//    // Input and write to file
//    do {
//        cin.getline(str, 90);  // Read a line of text from standard input
//        if (strlen(str) == 0)  // If empty line is entered, stop input
//            break;
//        of << str << endl;  // Write line to file
//    } while (true);
//
//    of.close();  // Close the output file
//
//    // Read back and display content from the file
//    ifstream inf("Two.txt");
//    char ptr[90];
//
//    cout << "\nContent read from file:\n";
//    while (inf.getline(ptr, 90)) {
//        cout << ptr << endl;
//    }
//
//    inf.close();  // Close input file
//    return 0;
//}
