#pragma once
#include <iostream>
using namespace std; 
#include "Animal.h"
class Dogs : public Animal{
	
private:
	string dogs_toy; 
public:
	Dogs(string dt)
	{
		this->dogs_toy = dt;
	};
	Dogs() { cout << "konstruktor domyslny dog" << endl; };
	~Dogs() { cout << "destruktor domyslny dog" << endl; };

	void make_sound() 
	{
		cout << "hau hau" <<endl; 
	}
		

	
};