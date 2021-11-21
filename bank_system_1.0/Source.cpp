#include <iostream>
#include "User.h"
#include "Administrator.h"
#include "Credit_card.h"
#include "Order.h"
#include "Junior_client.h"
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
	User* u1 = new User();

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
	u1->addAdministrator(p1);
	
	//--------lab5#2

	
	//Retirement_client retirement_client("Name_of_retirement_client", "Surname_of_retirement_client", "Test_identification_number", "Test_number_insurance", "Test_date_of_birth");
	//Junior_client junior_client("TestName", "TestSurname", "TestIdentificationNumber", "TestParentName", "TestParentSurname", "TestParentDB");
	//Person* person = new Person;

	////ќб'Їкт - людина

	////1
	//person->print_data();
	//cout << endl << endl;
	//
	//// «робити людину Junior кл≥Їнтом
	//person = &junior_client;
	//person->print_data();
	//cout << endl << endl;

	//// «робити людину Retirement кл≥Їнтом
	//person = &retirement_client;
	//person->print_data();
	//cout << endl << endl;

	//// Retirement -  Junior
	//Junior_client junior_client2("TestName2", "TestSurname2", "TestIdentificationNumber2", "TestParentName2", "TestParentSurname2", "TestParentDB2");
	//person = &junior_client;
	//person->print_data();
	//cout << endl << endl;
	//
	//
	////2

	//// «робити людину Junior кл≥Їнтом
	//person = (Person*)&junior_client;
	//person->print_data();
	//cout << endl << endl;

	//// «робити людину Retirement кл≥Їнтом
	//person = (Person*)&retirement_client;
	//person->print_data();
	//cout << endl << endl;

	//// Retirement -  Junior
	//Junior_client junior_client3("TestName3", "TestSurname3", "TestIdentificationNumber3", "TestParentName3", "TestParentSurname3", "TestParentDB3");
	//person = (Person*)&junior_client3 ;
	//person->print_data();
	//cout << endl << endl;
	//
	////3

	//// «робити людину Junior кл≥Їнтом
	//person = new Junior_client("TestName4", "TestSurname4", "TestIdentificationNumber4", "TestParentName4", "TestParentSurname4", "TestParentDB4");
	//person->print_data();
	//cout << endl << endl;

	//// «робити людину Retirement кл≥Їнтом
	//person = new Retirement_client("Name_of_retirement_client2", "Surname_of_retirement_client2", "Test_identification_number2", "Test_number_insurance2", "Test_date_of_birth2");
	//person->print_data();
	//cout << endl << endl;

	//// Retirement -  Junior
	//person = new Junior_client("TestName5", "TestSurname5", "TestIdentificationNumber5", "TestParentName5", "TestParentSurname5", "TestParentDB5");
	//person->print_data();
	//cout << endl << endl;
	//

	// Memory error User1
	try 
	{
		if (u1 == NULL)
			throw "Empty ptr"; 
		
	}
	catch (const char* exception) 
	{
		std::cerr << "U1=NULL!: " << exception << '\n';
	}
	//Memory error Administrator
	try
	{
		if (p1 == NULL)
			throw "Empty ptr";

	}
	catch (const char* exception)
	{
		std::cerr << "p1=NULL!: " << exception << '\n';
	}
	// Memory error CreditCard
	try
	{
		if (c1 == NULL)
			throw "Empty ptr";

	}
	catch (const char* exception)
	{
		std::cerr << "c1=NULL!: " << exception << '\n';
	}

	
	
	
	//-----------------
	p1->addUser_credit_card(c1);
	p1->addUser_credit_card(c2);
	
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
					/*u1->dumpData();*/
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
				
				switch (choose2)
				{
				case RETURN_TO_MAIN_1:
					choose2 = 0;
					break;
				case CHECK_CC:
					p1->checkUserCC();
					break;
				case DUMP_DATA_INTO_FILE:
					/*u1->dumpData();*/
					break;
				case OPEN_ACCOUNT:
					p1->createAccount_for_user(0);
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