#pragma once
#include <iostream>
using namespace std; 
#include "Animal.h"
class Dogs : public Animal{
	
public:
	string dogs_toy; 
	Owner *my_owner; 
public:
	Dogs(string dt, string n, int a, int w, string no, string so, int ao) :Animal(n, a, w), dogs_toy(dt)
	{
		my_owner = new Owner(no, so, ao);
		cout << "konstruktor Dogs" << endl;
	}
	Dogs(const Dogs& original)
	{
		dogs_toy = original.dogs_toy;

		*my_owner = *(original.my_owner);
		cout << "konstruktor kopiujacy" << endl;
	}
	Dogs() { cout << "konstruktor domyslny dog" << endl; };
	~Dogs() { cout << "destruktor domyslny dog" << endl; };

	void make_sound() 
	{
		cout << "hau hau" <<endl; 
	}
		

	
};