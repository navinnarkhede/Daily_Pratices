//5) given
//void disp(int); function.
//now create a function pointer and call this function using function pointer.
#include<iostream>
using namespace std;

int main()
{
	void disp(int);
	void (*fptr)(int);
	fptr = disp;
	fptr(10);
	return 0;
}
void disp(int a)
{
	cout << "the Value of a is : " << a << endl;
}