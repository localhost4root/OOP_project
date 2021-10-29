#include "Administrator.h"


void Administrator::addUser(User* user)
{
	users.push_back(user);
}
void Administrator::addUser_credit_card(Credit_card* credit_card)
{
	user_credit_cards.push_back(credit_card);
}