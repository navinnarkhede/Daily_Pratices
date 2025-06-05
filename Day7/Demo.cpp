#include<iostream>
using namespace std;
class Animal
{
public:
	virtual void makeSound()
	{
	}
};
class Tiger :public Animal
{
public:
	void makeSound()    // overriding makeSound() of Animal
	{
		cout << "roar" << endl;
	}
};
class Dog :public Animal
{
public:
	void makeSound()  // overriding makeSound() of Animal
	{
		cout << "bark" << endl;
	}
};
class Cat :public Animal
{
public:
	void makeSound()   // overriding makeSound() of Animal
	{
		cout << "meaw" << endl;
	}
};

int main()
{
	Animal* arr[3];
	arr[0] = new Tiger;
	arr[1] = new Dog;
	arr[2] = new Cat;

	for (int i = 0; i < 3; i++)
	{
		arr[i].makeSound();
	}
	return 0;
}