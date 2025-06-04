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
void perform(Animal* ptr)
{
	ptr->makeSound();
}

int main()
{
	perform(new Dog);
	perform(new Tiger);
	return 0;
}
