#include<iostream>
using namespace std;
int fun1(int k) 
{
	return k * k;
}
constexpr int fun2(int k)
{
	return k * k;
}
int main()
{
	int result1 = fun1(3);
	//int arr[result1];	//not allowed
	constexpr int result2 = fun2(3);
	int arr[result2];
	int result3 = fun2(20);
	cout << result3 << endl;
	// char arr1[result3];	//not allowed

	return 0;
}