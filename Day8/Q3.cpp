#include<iostream>
#include<fstream>
using namespace std;

int main() 
{
    fstream file("numbers.txt", ios::in | ios::out | ios::trunc);
    if (!file) 
    {
        cout << "File error!";
        return 1;
    }

    int num;
    cout << "Enter numbers (0 to stop):" << endl;

    // Write numbers to file
    do 
    {
        cin >> num;
        file << num << " ";
    } while (num != 0);

    // Reset file pointer to beginning
    file.seekg(0, ios::beg);
    cout << "Numbers from file: ";

    // Read numbers from file
    while (file >> num) 
    {
        cout << num << " ";
    }

    file.close();
    return 0;
}
