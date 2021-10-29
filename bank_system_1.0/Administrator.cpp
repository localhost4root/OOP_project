#include "Administrator.h"


void Administrator::addUser(User* user)
{
	users.push_back(user);
}
void Administrator::addUser_credit_card(Credit_card* credit_card)
{
	user_credit_cards.push_back(credit_card);
}
void Administrator::checkUserCC()
{
	int i = 0;
	while (i < (user_credit_cards.size()))
	{
		if (user_credit_cards[i]->checkCC())
		{
			user_credit_cards[i]->blockCC();
			cout << "Credit card #" << i << " was blocked"<< endl;
		}
			i++;
	}
}
void Administrator::createAccount_for_user(int user_number)
{
	int  id = 0;
	double sum, limit;
	cout << "Input id of bank account: ";
	cin >> id;
	cout << endl;
	cout << "Input sum wich payed user: ";
	cin >> sum;
	cout << endl;
	cout << "Input limit for that credit card: ";
	cout << endl;
	cin >> limit;
	Credit_card *new_CC = new Credit_card(sum, limit, false);
	Account new_account(id);
	
	new_account.addCredit_card(new_CC);
	users[user_number]->addAccount(new_account);
	
	cout << "Successfully created!" << endl;
}