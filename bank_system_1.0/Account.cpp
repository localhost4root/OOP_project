#include "Account.h"

void Account::addCredit_card(Credit_card* credit_card)
{
	this->credit_card = credit_card;

}
void Account::addOrder(Order* order)
{
	orders.push_back(order);
}
void Account::printMyBalance()
{
	cout << "Balance credit card is: " << credit_card->balance;
}
void Account::cancelMyAccount()
{
	credit_card->balance = 0;
	cout << "All your funds have been successfully donated to charity: " << endl;
}
double Account::getMyBalance()
{
	return credit_card->balance;
}
void Account::withdraw_money(double money)
{
	credit_card->balance -= money;
}
void Account::add_money(double money)
{
	credit_card->balance += money;
}