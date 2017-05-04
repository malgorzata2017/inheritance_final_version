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


public:
	Cats(string ct, string n, int a, int w, string no,string so, int ao):Animal( n, a, w), cats_toy(ct)
	{
		
		my_owner = new Owner(no, so, ao); 
		cout << "konstruktor Cat" << endl; 
	}
		 
	Cats(const Cats& original) 
	{
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
			my_owner = nullptr;
		}
		cout << "destruktor domyslny cat" << endl; 
	}; 


	 void make_sound()
	{
		std::cout << "miauu" << std:: endl;
	}; 
};