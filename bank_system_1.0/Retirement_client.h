#pragma once
#include "Person.h"
#include <iostream>
using std::string;

class Retirement_client : public Person
{
protected:
	string number_insurance;
	string date_of_birth;
public:
	Retirement_client(string name, string surname, string identification_number, string number_insurance, string date_of_birth) : Person(name, surname, identification_number),
		number_insurance(number_insurance), date_of_birth(date_of_birth)
	{		};
	Retirement_client() {};
	virtual ~Retirement_client()
	{
		cout << "Virtual destuctor for Retirement client client works" << endl;
	}
	virtual void print_data();
	friend class User;
};

