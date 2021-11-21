#pragma once
#include <string>
#include <iostream>
using namespace std;
class Person
{
protected:
		string name;
		string surname;
		string identification_number;

	public:
		Person(string name = "Empty", string surname = "Empty", string identification_number = "Empty") : name(name), surname(surname), identification_number(identification_number)
		{		};
		virtual ~Person()
		{
			cout << "Virtual destuctor for Person works" << endl;
		}
		virtual void print_data();
		
};

