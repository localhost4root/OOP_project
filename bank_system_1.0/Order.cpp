#include "Order.h"
void Order::set_Credit_card(Credit_card* credit_card)
{
	this->credit_card = credit_card;
}
void Order::payFromCreditCard()
{
	if (!(credit_card->is_my_CC_blocked))
	{
		if (credit_card->balance - order_price >= 0)
		{
			credit_card->balance -= order_price;
			cout << "Successfully paid from credit card!" << endl;
		}
		else
		{
			cout << "Not enough money on your credit card!";
		}
	}
	else
		cout << "Payment error!";
	
}
