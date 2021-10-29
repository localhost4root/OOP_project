#include <iostream>
#include "User.h"
#include "Administrator.h"
#include "Credit_card.h"
#include "Order.h"
#include "Account.h"
#include <string>
using namespace std;
enum userChoose {
	RETURN_TO_MAIN = 0,
	
	PAY_ORDER_BY_CREDIT_CARD = 1,
	BLOCK_CC = 2,
	PRINT_BALANCE = 3,
	CANCEL_ACCOUNT_BALANCE = 4,
	WRITE_FILE = 5,
	TRANSFER_MONEY = 6
};

enum adminChoose {
	RETURN_TO_MAIN_1 = 0,
	CHECK_CC = 1,
	DUMP_DATA_INTO_FILE = 2,
	OPEN_ACCOUNT = 3
};
int main()
{
	int choose1 = 1, choose2 = 1;
	string name_of_order, pin;
	int price_of_order;
	Administrator* p1 = new Administrator("Anton", "AA", "15");
	User* u1 = new User("John", "DD", "18");

	Order* o1 = new Order("test", 20);
	Credit_card* c1 = new Credit_card(100, 1000, false);
	Credit_card* c2 = new Credit_card(1000, 500, false);
	Account a1(1);
	Account a2(2);
	
	a1.addCredit_card(c1);
	a2.addCredit_card(c2);
	u1->addAccount(a1);
	u1->addAccount(a2);
	u1->addOrder(o1);
	o1->set_Credit_card(c1);
	
	
	/*d1->addAccount(r);*/
	a1.addCredit_card(c1);

	
	p1->addUser_credit_card(c1);
	
	while (choose1)
	{
		cout << "1 - to login as a user " << endl << "2 - to login as a administrator " << endl << "0 - to exit" << endl;
		cin >> choose1;
		cout << endl << endl;
		if (choose1 == 1)
		{
			while (choose2)
			{
				cout << "1 - to pay for the order by credit card"  <<endl << "2 - to block your CC"
					<< endl << "3 - to print your balance" << endl << "4 - to cancel account balance" << endl << "5 - to write info to file" << endl <<"6 - to transfer money from one account to other" << endl
					 << endl << "0 - to exit" << endl;
				cin >> choose2;
				cout << endl << endl;

				switch (choose2)
				{
				case RETURN_TO_MAIN:
					choose2 = 0;
					break;
				case PAY_ORDER_BY_CREDIT_CARD:
					o1->payFromCreditCard();
					break;
				case BLOCK_CC:
					c1->blockCC();
					break;
				case PRINT_BALANCE:
					a1.printMyBalance();
					break;
				case CANCEL_ACCOUNT_BALANCE:
					a1.cancelMyAccount();
					break;
				case WRITE_FILE:
					u1->dumpData();
					break;
				case TRANSFER_MONEY:
					int sender, recepient;
					double sum;
					cout << "Input number of sender, recepient and sum of money transfer: ";
					cin >> sender >> recepient >> sum;
					u1->payFromOneAccount_ToOther(sender, recepient, sum);
					break;
				default:
					break;
				}
				cout << endl << endl;
			}
		}

		if (choose1 == 2)
		{
			while (choose2)
			{
				cout << "1 - to check user CC " << endl << "2 - dump data into file " << endl << "3 - to open bank account for the user " << endl << "0 - to exit" << endl;
				cin >> choose2;
				cout << endl << endl;
				int  index_0 = 0;
				double sum_0;
				switch (choose2)
				{
				case RETURN_TO_MAIN_1:
					choose2 = 0;
					break;
				case CHECK_CC:
					
					break;
				case DUMP_DATA_INTO_FILE:
					
					break;
				case OPEN_ACCOUNT:
					cout << "Input id of bank account: " << endl;
					cin >> index_0;
					cout << "Input sum of money which the customer has put on the account: ";
					cin >> sum_0;
					

					break;
				}
			}
		}
	}
	delete p1;
	delete u1;
	delete c1;
	delete &a1;
	delete &a2;
	delete o1;
	
	

	return 0;
}