//9) given
//int arr[] = { 10,20,30,40,50 }
//write a function which can accept above array inside the pointer and 
// using for loop traverse it.

#include<iostream>
using namespace std;
int main()
{
	int arr[] = {10,20,30,40,50};
	void accept(int*);
	accept(arr);
	return 0;
}

void accept(int *ptr)
{
	for (int i = 0;i < 5;i++)
	{
		cout<<ptr[i]<<endl;
	}
}