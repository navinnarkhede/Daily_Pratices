#include<iostream>
#include<cstring>
using namespace std;

struct Product 
{
    char* pcode;
    char* name;
    int price;
    int qty;

    // Parameterized constructor
    Product(const char* pc, const char* nm, int pr, int q) 
    {
        pcode = new char[strlen(pc) + 1];
        strcpy_s(pcode, strlen(pc)+1, pc);

        name = new char[strlen(nm) + 1];
        strcpy_s(name, strlen(nm) + 1, nm);

        price = pr;
        qty = q;
    }

    // Destructor to free memory
    ~Product() {
        delete[] pcode;
        delete[] name;
    }

    // Friend function for output
    friend ostream& operator<<(ostream& out, const Product& p) 
    {
        out << "[" << p.pcode << "," << p.name << "," << p.price << "," << p.qty << "]" << endl;
        return out;
    }
};

int main() 
{
    Product p1("p1", "soap", 100, 20);
    Product p2("p2", "perfume", 300, 50);
    Product p3("p3", "Deo", 200, 100);

    cout << p1 << endl;
    cout << p2 << endl;
    cout << p3 << endl;

    return 0;
}
