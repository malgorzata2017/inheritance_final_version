#pragma once
#include <iostream>
using namespace std; 
class Animal
{

private:
	string name;
	int age, weight;

public:
	virtual void make_sound() {cout << "no sound"<<endl; };
	Animal() { cout << "konstruktor domyslny animal" << endl;  };
	Animal(string n, int a, int w); 
	~Animal()
	{
		cout << "destruktor domyslny  animal" << endl;
	};
	 

};