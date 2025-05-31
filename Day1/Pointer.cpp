#include<iostream>
using namespace std;
int main()
{
	/*char name[20] = "Rajesh";
	char* ptr = name;
	cout << *ptr++ << "\t" << *ptr << endl;
	return 0;*/

	/*int arr[4] = { 10,20,30,40 };
	int* ptr = arr;
	cout << (*ptr)++ << "\t" << *ptr << endl; */
	
	
	/*int arr[4] = {10,20,30,40};
	int* ptr = arr;
	cout << ++(*ptr) << "\t" << *ptr << endl;*/


	/*int arr[4] = { 10,20,30,40 };
	int* ptr = arr;
	cout << ++++*ptr << "\t" << *ptr << endl;*/
	


	//int arr[4] = { 10,20,30,40 };
	//int* ptr = arr;
	//cout << ++*ptr++ << "\t" << *ptr << endl;


	/*int arr[4] = { 10,20,30,40 };
	int* ptr = arr;
	cout << *(++ptr) << "\t" << *ptr << endl;*/



	
	int arr[4] = { 10,20,30,40 };
	int* ptr = arr;
	cout << ++*(++(++ptr))++ << "\t" << *ptr << endl;
}



	/*int arr[4] = { 10,20,30,40 };
	int* ptr = arr;
	*/
	
	/*int arr[4] = { 10,20,30,40 };
	int* ptr = arr;
	*/
	return 0;
}