#include<iostream>
#include <vector>
using namespace std;

int main()
{
	auto i = 10;
	auto c = 'a';
	auto str = "NAVIN";
	auto f = 20.33;

	cout << i << endl;
	cout << c << endl;
	cout << str << endl;
	cout << f << endl;

	std::vector<int> numbers = { 1, 2, 3, 4, 5 };
	auto it = numbers.begin();   // it is deduced to be of type std::vector<int>::iterator
	auto add = [](int a, int b) { return a + b; };  // add is deduced to be of type lambda function



	return 0;
}