#include<iostream>

class Animal
{
public:
	virtual void MakeSound() const = 0;
};
	
class Cat : public Animal
{
public:
	void MakeSound() const override
	{
		std::cout << "Meow\n";
	}
};

class Dog : public Animal
{
public:
	void MakeSound() const override
	{
		std::cout << "Woof\n";
	}
};

class Crow : public Animal
{
	void MakeSound() const override
	{
		std::cout << "Car\n";
	}
};

class Elefant : public Animal
{
	void MakeSound() const override
	{
		std::cout << "Woooo!\n";
	}
};

class Tigr : public Animal
{
	void MakeSound() const override
	{
		std::cout << "RRar!\n";
	}
};

int main()
{
	Animal* Animals[5];
	Animals[0] = new Cat();
	Animals[1] = new Dog();
	Animals[2] = new Crow();
	Animals[3] = new Elefant();
	Animals[4] = new Tigr();

	for (Animal* a : Animals)
		a->MakeSound();
}