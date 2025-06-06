#include<fstream>
#include<iostream>
#include<cstring>
using namespace std;

class Student {
private:
    char prnno[10];
    char name[20];
    char stream[20];

public:
    Student() {}  // Default constructor

    Student(const char* a, const char* b, const char* c) {
        strcpy_s(prnno, a);
        strcpy_s(name, b);
        strcpy_s(stream, c);
    }

    char* getPrnno() { return prnno; }
    char* getName() { return name; }
    char* getStream() { return stream; }

    friend ostream& operator<<(ostream& out, Student& s) {
        out << s.prnno << "\t" << s.name << "\t" << s.stream;
        return out;
    }
};

// Global file stream
fstream f("studentdata.txt", ios::in | ios::out | ios::trunc | ios::binary);

// Global show function using PRN search
void show(char* ptr) {
    Student temp;
    f.seekg(0, ios::beg);  // Start from beginning

    while (f.read((char*)&temp, sizeof(temp))) {
        if (!strcmp(temp.getPrnno(), ptr)) {
            cout << "\nMatch Found:\n";
            cout << temp << endl;
            return;
        }
    }

    cout << "\nPRN not found.\n";
}

int main() {
    Student arr[] = {
        Student("p001", "abc", "btech"),
        Student("p002", "xyz", "be"),
        Student("p003", "pqr", "mtech"),
        Student("p004", "lmn", "bca")
    };

    // File me write kar rahe hai
    f.write((char*)&arr, sizeof(arr));

    char prnno[10];
    cout << "Enter PRN to search: ";
    cin >> prnno;

    // Function call for search
    show(prnno);

    f.close();
    return 0;
}
