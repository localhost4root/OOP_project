#pragma once
#include "Person.h"
#include "User.h"
#include <vector>
using namespace::std;
class User;
class Credit_card;
class Administrator : protected Person
{
	vector<User*> users;
	vector<Credit_card*>user_credit_cards;
	void addUser(User* user);
public:
	Administrator(string name, string surname, string identification_number) : Person(name, surname, identification_number)
	{		};
	void addUser_credit_card(Credit_card* credit_card);
	void checkUserCC();
	void createAccount_for_user(int user_number);
	friend class User;
	friend class Credit_card;
};

