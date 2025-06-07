#include<iostream>
using namespace std;
template <class type>
void add(type a, type b) //Function Template
{
	cout << endl << a + b << endl;
}
// "type" is known as a template argument
void main()
{
	add(20, 40);
	add('A', 'b');
	add(34.30, 45.89);
}