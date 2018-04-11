#include <iostream>

using namespace std;

struct Animal {
	virtual void sound() = 0;
	virtual void nipple() = 0;
};

struct chiken : public Animal
{
	void sound() {
		cout << "Kkio Kokio\n";
	}
	void nipple () {
		cout << "0\n";
	}
};
struct Dog : public Animal
{
	void sound() {
		cout << "Mong mong\n";
	}
	void nipple () {
		cout << "8\n";
	}
};

struct Lion : public Animal
{
	void sound() {
		cout << "Kwaaa~~\n";	            
	}
	void nipple () {
		cout << "4\n";
	}
};

struct Cow : public Animal
{
	void sound() {
		cout << "mme~~\n";
	}
	void nipple () {
		cout << "4\n";
	}
};

struct Horse : public Animal
{
	void sound() {
		cout << "Heing";
	}
	void nipple () {
		cout << "4\n";
	}
};

struct Pig : public Animal
{
	void sound() {
		cout << "kkool kkool\n";
	}
	void nipple () {
		cout << "14\n";
	}
};
int main() {
	Animal* p[4];
	p[0]=new Dog();
	p[1]=new Lion();
	p[2]=new Cow();
	p[3]=new chiken();
	p[4]=new Pig();
	
	p[0]-> sound();
	p[1]-> sound();
	p[2]-> sound();
	p[3]-> sound();
	p[4]-> sound();
	
	p[0]-> nipple();
	p[1]-> nipple();
	p[2]-> nipple();
	p[3]-> nipple();
	p[4]-> nipple();
	
	delete p[0];
	delete p[1];
	delete p[2];
	delete p[3];
	delete p[4];	
}
