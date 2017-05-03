#pragma once
#include <iostream>
using namespace std; 
class Animal
{

public:
	string name;
	int age; 
	int weight;

public:
	virtual void make_sound() {cout << "no sound"<<endl; };
	Animal() { cout << "konstruktor domyslny animal" << endl;  };
	Animal(string n, int a, int w); 
	virtual ~Animal()
	{
		cout << "destruktor domyslny  animal" << endl;
	};
	 

};