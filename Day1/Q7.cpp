//7) Given following functions :
//void disp1(int k);
//int disp2(char*);
//void disp3();
//double* disp4(char ch);
//
//declare "pointer to functions" for the above functions.

#include<iostream>
using namespace std;
int main()
{
	void disp1(int);
	void (*ptr1)(int);
	ptr1 = disp1;
	ptr1(10);


	int disp2(char*);
	int (*ptr2)(char*);
	ptr2 = disp2;
	char cha = 'a';
	cout << ptr2(&cha) << endl;
	
	void disp3();
	void (*ptr3)();
	ptr3 = disp3;
	ptr3();


	double* disp4(char);
	double* (*ptr4)(char);
	ptr4 = disp4;
	char ch3 = 'B';
	double *res = ptr4(ch3);
	cout << *res << endl;

}
void disp1(int n1)	
{
	cout << n1 * n1;
}
int disp2(char* ptr)
{
	return (int)*ptr;
}
void disp3()
{
	cout << "disp3" << endl;
}
double* disp4(char ch)
{
	static double val = 22.33;
	cout<<ch<< endl;
	return &val;
}
