#include<iostream>
#include<vector>
#include<iterator>
using namespace std;

int main()
{


	/*vector<int> data = {1,2,3,4,5,6,7,8,9,10};
	vector<int>::iterator itr = data.begin();
	while (itr != data.end())
	{
		cout << *itr++ << endl;
	}*/

	//vector<int> data = { 1,2,3,4,5 };
	//vector<int>::iterator itr = data.begin();
	//while (itr != data.end())
	//{
	//	cout << *itr++ << endl;
	//}

	

	/*
	without "auto" keyword

	vector<double> data = { 1.3,2.7,3.1,4.4,5.8};
	vector<double>::iterator itr = data.begin();
	while (itr != data.end())
	{
		cout << *itr++ << endl;
	}
	*/


	/*vector<int> data = { 10,20,30,40,50,60 };
	auto itr = data.begin();
	while (itr != data.end())
	{
		cout << *itr++ << endl;
	}*/



	/*
	with "auto" keyword

	vector<int> data = { 10,20,30,40,50 };
	auto itr = data.begin(); // automatically deduced as iterator of type vector<int>
	while (itr != data.end())
	{
		cout << *itr++ << endl;
	}
	*/

	//vector<const char*> data = { "hello","welcome","bye" };
	//auto itr = data.begin(); // automatically deduced as iterator of type vector<const char*>
	//while (itr != data.end())
	//{
	//	cout << *itr++ << endl;
	//}

}