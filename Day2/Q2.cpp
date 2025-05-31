#include<iostream>  
using namespace std;  
struct book  
{  
    char bid[5];  
    char name[30];  
    int price;  
};  
void getdata(int rec,book *b)
{
    for (int i = 0; i < rec; i++)
    {
        cout << "Enter the book ID: ";
        cin >> b[i].bid;
        cout << "Enter the book name: ";
        cin >> b[i].name;
        cout << "Enter the book price: ";
        cin >> b[i].price;
    }
}
void displaydata(int rec, book* b)  
{  
    for (int i = 0; i < rec; i++)  
    {  
        cout << b[i].bid << "\t" << b[i].name << "\t" << b[i].price << endl;  
    }  
}
int main()  
{  
    int rec;  
    cout << "Enter the number of records:";
    cin >> rec;  
    book* b = new book[rec]; 
    getdata(rec,b);
	displaydata(rec, b);
    return 0;
}