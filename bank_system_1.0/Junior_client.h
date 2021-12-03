#pragma once
#include "Person.h"
#include <iostream>
using namespace std;
template<typename T, typename A, typename B>
class Junior_client : public Person
{
protected:
	A parent_Name;
	B parent_Surname;
	T parent_date_of_birth;
public:
	Junior_client( T parent_date_of_birth, string name="Null", string surname = "Null", string identification_number = "Null", A parent_Name = "Null", B parent_Surname = "Null") : Person(name, surname, identification_number),
		parent_Name(parent_Name), parent_Surname(parent_Surname), parent_date_of_birth(parent_date_of_birth)
	{
		
	};
	
	Junior_client()
	{

	};
	virtual ~Junior_client()
	{
		cout << "Virtual destuctor for Junior client works" << endl;
	}
	friend class User;
	virtual void print_data()
	{
		cout << "Name and surname of parents: " << parent_Name << "   " << parent_Surname << endl << "Parent's number: " << parent_date_of_birth << endl;
	}
};

