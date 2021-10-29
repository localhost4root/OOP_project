#pragma once
#include <string>
using namespace std;
class Person
{
	protected:
		string name;
		string surname;
		string identification_number;

	public:
		Person(string name, string surname, string identification_number) : name(name), surname(surname), identification_number(identification_number)
		{		};
};

