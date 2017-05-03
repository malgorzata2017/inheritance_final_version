#include <iostream>
using namespace std; 
#include "Cats.h"
#include "Dogs.h"
#include "Animal.h"
#include <vector>

int main()
{
	Animal my_animal;
//	Animal *an_pointer;
	Cats my_cat;
	Dogs my_dog;
	Cats my_cat2;
	Dogs my_dog2;
/*
	my_cat.make_sound();
	an_pointer = &my_cat;
	an_pointer->make_sound();*/

	vector<Animal*> v;
	

	v.push_back(&my_cat);
	v.push_back(&my_dog);
	v.push_back(&my_cat2);
	v.push_back(&my_dog2);
	vector<Animal*>::iterator i = v.begin();
	for (i; i != v.end(); i++)
	{
		(*i)->make_sound();
		int a = 6;
	}
	system("PAUSE");
}