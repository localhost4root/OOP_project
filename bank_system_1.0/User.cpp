#include "User.h"
#include "Account.h"
#include <vector>
#include <fstream>
#include <iomanip>
using namespace std;

void User::addAdministrator(Administrator* administrator)
{
	administrators.push_back(administrator);
	administrator->addUser(this);
}
void User::addOrder(Order* order)
{
    orders.push_back(order);
}
void User::addAccount(Account account)
{
	accounts.push_back(account);
}
void User::dumpData()
{
	int i = 0;
	ofstream DATA("Information.txt");
	DATA << "Name and surname: " << name << setw(3) << surname << endl;
	DATA << "With identification number: " << identification_number<< endl;
	
	while (i < (accounts.size()))
	{
		DATA << "User account #" << i + 1 << endl;
		DATA <<"Balance: " << accounts[i].getMyBalance() << endl;
		i++;
	}
	DATA.close();
	cout << "Successfully dumped!" << endl;
}
void User::payFromOneAccount_ToOther(int number_of_sender, int number_of_recipient, double sum)
{
	if (accounts[number_of_sender-1].getMyBalance() - sum < 0)
	{
		cout << "Not enough money!" << endl;
	}
	else
	{
		accounts[number_of_sender-1].withdraw_money(sum);
		accounts[number_of_recipient-1].add_money(sum);
		cout << "Succesfully paid!" << endl;
	}

	
}