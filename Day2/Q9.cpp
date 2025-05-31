//////9)write a function which takes 3 arguments
////variable, pointer and a reference.(any datatype)
////invoke this function and show how "call by value", "call by address" and "call by reference" will work.
#include<iostream>
using namespace std;
void third(int e, int *ptr, int &ref)
{
	cout << "Integer : " << ++e << endl;
	cout << "Ptr : " << ++*ptr << endl;
	cout << "Ref : " << ++ref << endl;
}
int main()
{
	int a = 10, b = 20, c = 30;
	third(a,&b,c);

	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	return 0;
}