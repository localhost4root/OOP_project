#pragma once
#include "Credit_card.h"
#include <iostream>
#include <vector>
using namespace std;
class Credit_card;
class Order
{
	string order_name;
	int order_price;
	Credit_card* credit_card;
	/*Credit_card* credit_card;*/
	
public:
	Order(string order_name = "Empyt", int order_price = 0) : order_name(order_name), order_price(order_price)
	{		};
	void payFromCreditCard();
	void set_Credit_card(Credit_card* credit_card);
	
	friend class Credit_card;
};

