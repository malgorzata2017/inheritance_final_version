#pragma once
#include <iostream>
using namespace std; 

class Owner {
public:
	string name, surname; 
	int age; 
	Owner(string n,string s,  int a) :name(n),surname(s), age(a) { cout << "konstruktor owner" << endl;  };
	Owner() {}; 
	~Owner() { cout << "destruktor owner" << endl;  };
};