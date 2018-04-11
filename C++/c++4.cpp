#include <iostream>

using namespace std;

struct Animal {
	virtual void sound() = 0;
};

struct Dog : public Animal
{
	void sound() {
		cout << "Mong mong\n";
	}
};

struct Lion : public Animal
{
	void sound() {
		cout << "Kwaaa~~\n";	            
	}
};

struct Cow : public Animal
{
	void sound() {
		cout << "mme~~\n";
	}
};

struct Horse : public Animal
{
	void sound() {
		cout << "Heing";
	}
};

struct Pig : public Animal
{
	void sound() {
		cout << "kkool kkool";
	}
};
int main() {
	Animal* p[4];
	p[0]=new Dog();
	p[1]=new Lion();
	p[2]=new Cow();
	p[3]=new Horse();
	p[4]=new Pig();
	
	p[0]-> sound();
	p[1]-> sound();
	p[2]-> sound();
	p[3]-> sound();
	p[4]-> sound();
	
	delete p[0];
	delete p[1];
	delete p[2];
	delete p[3];
	delete p[4];	
}
