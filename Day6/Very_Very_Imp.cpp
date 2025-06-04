#include<iostream>
using namespace std;
class base
{
public:
	int bval;
	base()
	{
		bval = 0;
	}
};
class sub :public base
{
public:
	int bval;
	sub()
	{
		bval = 1;
	}
};
void SomeFunc(base* arr, int size)
{
	for (int i = 0; i < size; i++, arr++)
		cout << arr->bval << "\t";
	cout << endl;
}
int main()
{
	base BaseArr[5];
	SomeFunc(BaseArr, 5);
	sub SubArr[5];
	SomeFunc(SubArr, 5);
}