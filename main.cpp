#include <iostream>
using namespace std; 
#include "Cats.h"
#include "Dogs.h"
#include "Animal.h"
#include <vector>
#include <string>
int main()
{
	Animal my_animal;
//	Animal *an_pointer;
	/*
	Cats my_cat;
	Dogs my_dog;
	Cats my_cat2;
	Dogs my_dog2;
/*
	my_cat.make_sound();
	an_pointer = &my_cat;
	an_pointer->make_sound();*/
	/**
	vector<Animal*> v;
	

	v.push_back(&my_cat); 
	v.push_back(&my_dog);
	v.push_back(&my_cat2);
	v.push_back(&my_dog2);
	vector<Animal*>::iterator i = v.begin();
	for (i; i != v.end(); i++)
	{
		(*i)->make_sound();
		
	}
	*/

	Cats my_cat3("red_ball", "Filemon", 3, 1, "Gosia", "Liszka", 20); 
	Dogs my_dog3("bone", "Bambo", 5, 10, "Justyna", "Sek", 30);
	Cats my_cat4("ping-pong", "Mruczek", 2, 2, "Czeslawa", "Liszka", 50);
	Dogs copy_dog3(my_dog3); 
	vector<Animal*> v;
	v.push_back(&my_cat3);
	v.push_back(&my_dog3);
	v.push_back(&my_cat4);
	v.push_back(&copy_dog3);
	vector<Animal*>::iterator i = v.begin();
	for (i; i != v.end(); i++)
	{
		cout << (*i)->name << endl;
		cout << (*i)->age << endl;
		cout << (*i)->weight << endl;
		(*i)->make_sound();

	}
	cout << my_cat3.my_owner->surname << endl; 


	system("PAUSE");
}