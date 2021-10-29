#pragma once
#include "Credit_card.h"
#include "Order.h"
#include "User.h"
class Credit_card;
class Order;
class Account
{
	double bank_account_balance;
	int number_of_account;
	Credit_card* credit_card;
	vector <Order*> orders;
public:
	Account(double bank_account_balance=0, int number_of_account=0) : bank_account_balance(bank_account_balance), number_of_account(number_of_account)
	{			};
	void addOrder(Order* order);
	void addCredit_card(Credit_card* credit_card);
	friend class Credit_card;
};

