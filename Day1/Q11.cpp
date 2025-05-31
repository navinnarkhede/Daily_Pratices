//11) accept a name, display it.Now change first and the last characters of the name with 
// their next characters and again print it.
//e.g : name is "sachin"
//output should be "tachio"

#include<iostream>
using namespace std;

int main()
{
    char name[7] = "sachin";
    
    char* ptr = name;
    *ptr += 1;

    while (*(ptr + 1))		// last \0 give 0 and loop exits 
    {
        ptr++;
    }
    *ptr += 1;                   

    cout << name << endl;
    return 0;
}