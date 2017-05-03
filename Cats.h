#pragma once
#include <iostream>
#include "Animal.h"

class Cats :public Animal
{

	string name; 
	int age, weigt; 

public:
	Cats(string n,int a, int w  )
	{
	}
		void set_name(string n )
	{
		this->name = n;

		}; 
		Cats() {}; 
		~Cats() {}; 


	void make_sound()
	{
		std::cout << "miauu" << std:: endl;
	}; 
};