#include "Credit_card.h"
void Credit_card::addOrder(Order* order)
{
	orders.push_back(order);
	order->set_Credit_card(this);
}
void Credit_card::addAccount(Account* account)
{
	this->account = account;
	account->addCredit_card(this);
}