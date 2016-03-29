///////////////////////////////////////////////////////////////////////////////////////////////////
//                         COMPUTER METHODS 3 PRACTICAL TEST 1 (MOCK)
// Name:
// Student No:
// Date: 
///////////////////////////////////////////////////////////////////////////////////////////////////

// ***** QUESTION 4 ****
// Question 4 has 3 parts (you do NOT need to include each class in a separate file!)
// 4.1 Create a virtual base class "Animal" which has two methods, name() and does(). 
// 4.2 From class "Animal", derive a concrete class "Bird" and "Dog".  Print appropriate message for
//     each method.
// 4.3 Write a driver program which creates an object of each type and demonstrates POLYMORPHISM. 


#include <iostream>
#include <string>
using namespace std;

class Animal
{
public:
	Animal(string , string);
	virtual string name();
	virtual string does();
	virtual ~Animal();

private:
	string Name;
	string Does;
};

Animal::Animal(string n, string d) : Name(n), Does(d)
{

}
string Animal::name()
{
	return Name;
}

string Animal::does()
{
	return Does;
}
Animal::~Animal()
{

}

//****************************************************************************************************************************_
class Bird: public Animal
{
public:
	Bird(string, string);
	virtual string name();
	virtual string does();
	~Bird();
};
Bird::Bird(string name, string does):
Animal(name,does)
{

}
string Bird::name()
{
	return Animal::name();
}
string Bird::does()
{
	return Animal::does();
}
Bird::~Bird()
{

}
//****************************************************************************************************************************_
class Dog: public Animal
{
public:
	Dog(string, string);
	virtual string name();
	virtual string does();
	~Dog();
};

Dog::Dog(string name, string does) :
Animal(name, does)
{

}
string Dog::name()
{
	return Animal::name();
}
string Dog::does()
{
	return Animal::does();
}
Dog::~Dog()
{

}


//******************************************************************************************************************************_
int main()
{
	Animal *obj1, *obj2;
	obj1 = new Bird("Spa", "Chirps");
	obj2 = new Dog("pit", "smiles");
	cout << "Bird: " << (*obj1).name() << " " << (*obj1).does() << endl;
	cout << "Dog: " << obj2->name() << " " << obj2->does() << endl;

	delete obj1;
	delete obj2;
}