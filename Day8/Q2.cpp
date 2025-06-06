#include<iostream>
#include<fstream>
using namespace std;

int main() {
    ofstream fout("initials.txt"); // File open in write mode
    if (!fout) {
        cout << "File can't be opened." << endl;
        return 1;
    }

    char initials[] = { 'S', 'M', 'V', 'I', 'T', 'A' };

    for (int i = 0; i < 6; i++) {
        fout.put(initials[i]); // Char-by-char write
    }

    fout.close(); // File closed

    ifstream fin("initials.txt"); // Open file in read mode
    char ch;
    cout << "Characters from file:" << endl;

    while (fin.get(ch)) {
        cout << ch << " ";
    }

    fin.close();
    return 0;
}
