// Implicitly initialize objects to return: 


// C++ program to implicitly
// initialize an object to return
#include <iostream>
using namespace std;
//
//// declaring a class 'A'
class A {
    // a and b are data members
    int a;
    int b;

    // constructor
public:
    A(int x, int y)
        : a(x)
        , b(y)
    {
        cout << "inside param constructor" << endl;
    }
    void show() { cout << a << " " << b; }
    A(const A& ref)
    {
        this->a = ref.a;
        this->b = ref.b;
        cout << "inside copy constructor" << endl;
    }
};

A f(int a, int b)
{
    // The compiler automatically
    // deduces that the constructor
    // of the class A needs to be called
    // and the function parameters of f are
    // needed to be passed here
    return { a, b };
}

// client Code
int main()
{
    A x = f(1, 2);
    // A x(f(1, 2));  // this also works
    x.show();
    return 0;
}