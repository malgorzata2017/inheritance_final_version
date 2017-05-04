#pragma once
#include <iostream>
#include "Animal.h"
#include "Owner.h"
using namespace std; 

class Cats :public Animal
{
public:
	string cats_toy; 
	Owner* my_owner; 
	int* legs;

public:
	Cats(string ct, string n, int a, int w, string no, string so, int ao) :Animal(n, a, w), cats_toy(ct)
	{
		legs = new int[4];
		my_owner = new Owner(no, so, ao); 
		cout << "konstruktor Cat" << endl; 
	}
		 
	Cats(const Cats& original) 
	{
		name = original.name;
		age = original.age;
		weight = original.weight;
		*legs = *(original.legs);
		cats_toy = original.cats_toy; 
		my_owner = new Owner(*original.my_owner);

		cout << "konstruktor kopiujacy" << endl;
	}
	//TODO assignment operator
	Cats() { cout << "konstruktor domyslny cat" << endl; };
	~Cats() 
	{
		if (my_owner != nullptr)
		{
			delete my_owner;
			delete legs; 
			my_owner = nullptr;
		}
		cout << "destruktor domyslny cat" << endl; 
	}; 


	 void make_sound()
	{
		std::cout << "miauu" << std:: endl;
	}; 
};