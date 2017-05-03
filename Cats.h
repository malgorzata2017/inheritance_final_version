#pragma once
#include <iostream>
#include "Animal.h"
using namespace std; 

class Cats :public Animal
{
private:
	string cats_toy; 

public:
	Cats(string ct )
	{
		this->cats_toy = ct; 
	};
		 
	Cats() { cout << "konstruktor domyslny cat" << endl; };
	~Cats() { cout << "destruktor domyslny cat" << endl; };


	void make_sound()
	{
		std::cout << "miauu" << std:: endl;
	}; 
};