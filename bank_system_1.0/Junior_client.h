#pragma once
#include "Person.h"
#include <iostream>
using namespace std;
class Junior_client : public Person
{
protected:
	string parent_Name;
	string parent_Surname;
	string parent_date_of_birth;
public:
	Junior_client(string name, string surname, string identification_number, string parent_Name, string parent_Surname, string parent_date_of_birth) : Person(name, surname, identification_number),
		parent_Name(parent_Name), parent_Surname(parent_Surname), parent_date_of_birth(parent_date_of_birth)
	{		};
	Junior_client() {};

	virtual ~Junior_client()
	{
		cout << "Virtual destuctor for Junior client works" << endl;
	}
	friend class User;
	virtual void print_data();
};

