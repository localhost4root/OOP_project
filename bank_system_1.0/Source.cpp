#include <iostream>
#include "User.h"
#include "Administrator.h"
#include "Credit_card.h"
#include "Order.h"
#include "Junior_client.h"
#include "Account.h"
#include <string>
#include <iterator>
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
//4
template <class D> void check_max(D a, D b)
{
	if (a > b)
		cout << "First max" << endl;
	else if (a<b)
		cout << "Second max" << endl;
	else
		cout << "First = second" << endl;
	
}

int main()
{
	using namespace std;
	int choose1 = 1, choose2 = 1;
	string name_of_order, pin;
	int price_of_order;
	Administrator* p1 = new Administrator("Anton", "AA", "15");
	User* u1 = new User();

	Order* o1 = new Order("test", 20);
	Credit_card* c1 = new Credit_card(100, 1000, false);
	Credit_card* c2 = new Credit_card(1000, 500, false);
	Credit_card c3(100, 1000, false);
	Credit_card c4(500, 1000, false);
	Account a1(1);
	Account a2(2);
	Account a3(3);
	
	a1.addCredit_card(c1);
	a2.addCredit_card(c2);
	u1->addAccount(a1);
	u1->addAccount(a2);
	u1->addOrder(o1);
	o1->set_Credit_card(c1);
	u1->addAdministrator(p1);
	
	//--------lab5#2

	
	Retirement_client retirement_client("Name_of_retirement_client", "Surname_of_retirement_client", "Test_identification_number", "Test_number_insurance", "Test_date_of_birth");
	Junior_client <string, string, string> junior_client("TestName", "TestSurname", "TestIdentificationNumber", "TestParentName", "TestParentSurname", "TestParentDB");
	Person* person = new Person;

	//ќб'Їкт - людина

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
	
	
	//1
	std::cout << c3 << endl;
	std::cout << ++c3 << endl;
	std::cout << c3++ << endl;
	std::cout << c3 << endl;
	std::cout << --c3 << endl;
	std::cout << c3-- << endl;
	std::cout << c3 << endl;
	//2
	Credit_card c5 = c3 + c4;
	std::cout << c5 << endl;
	//3
	c3 += c4;
	
	std::cout << endl <<endl << c3 << endl;
	std::cout << endl << endl << c4 << endl;
	c3 *= c4;
	std::cout << c3 << endl;

	c3 -= c5;
	std::cout << c3 << endl;


	//4
	check_max(a1.getMyBalance(), a2.getMyBalance());
	// lab 7 
	
	//vectors
	vector<Account>accounts;
	accounts.push_back(a1);
	accounts.emplace_back(a2);
	vector<Account>::iterator iter = accounts.begin() + 2;
	accounts.insert(iter,  a2);
	//iterator4vectors
	vector <Account>::iterator iter1_start = accounts.begin();
	vector <Account>::reverse_iterator iter1_end = accounts.rbegin();
	iter1_start + 2;
	for (iter1_start = accounts.begin(); iter1_start != accounts.end(); iter1_start++)
	{
		std::cout << iter1_start->get_number_of_account()<< endl;
	}
	iter1_end++;
	(iter1_end--)->get_number_of_account();
	//algoritms
	sort(accounts.begin(), accounts.end());
	accounts.erase(accounts.begin());
	//reverse(iter1_start, iter1_end);
	
	//list
	list<Account> list_accounts;
	list_accounts.push_back(a1);
	list_accounts.push_front(a2);
	list_accounts.insert(list_accounts.end(), a1);
	//iterator4list
	list <Account>::iterator iter1list_start = list_accounts.begin();
	list <Account>::reverse_iterator iter1list_end = list_accounts.rbegin();
	iter1list_start++;
	(iter1list_end++);
	/*!!!!iter1list_start += 2;*/

	//deque
	deque<Account> deque_accounts;
	deque_accounts.push_back(a1);
	deque_accounts.push_front(a2);
	deque_accounts.insert(deque_accounts.end(), a1);
	//iterator4deque
	deque <Account>::iterator iter1deque_start = deque_accounts.begin();
	deque <Account>::reverse_iterator iter1deque_end = deque_accounts.rbegin();
	iter1deque_start++;
	(iter1deque_end++);
	iter1deque_start + 2;

	//set
	set <Account> set_accounts;
	set_accounts.insert(a1);
	set_accounts.insert(a2);
	set_accounts.insert(a1);
	//iterator4set
	set<Account>::iterator iter1set_start = set_accounts.begin();
	set <Account>::reverse_iterator iter1set_end = set_accounts.rbegin();
	multiset<Account>::iterator iter1set_end2 = set_accounts.end();
	std::cout << iter1set_start->a;
	for (iter1set_start; iter1set_start != set_accounts.end(); ++iter1set_start) {
		std::cout << iter1set_start->a;
	}

	//multiset
	multiset <Account> multiset_accounts;
	multiset_accounts.insert(a1);
	multiset_accounts.insert(a2);
	multiset_accounts.insert(a1);
	//iterator4multiset
	multiset<Account>::iterator iter1multiset_start = multiset_accounts.begin();
	multiset <Account>::reverse_iterator iter1multiset_end = multiset_accounts.rbegin();
	multiset<Account>::iterator iter1multiset_end2 = multiset_accounts.end();
	std::cout << iter1multiset_start->a;
	for (iter1multiset_start; iter1multiset_start != multiset_accounts.end(); ++iter1multiset_start) {
		std::cout << iter1multiset_start->a;
	}
	
	//map
	map <int, Account> map_accounts;
	map_accounts.insert(make_pair(1, a1));
	map_accounts.insert(make_pair(2, a2));
	map_accounts.insert(make_pair(3, a3));
	//iterator4map
	map <int, Account> ::iterator iter1map_start = map_accounts.begin();
	map <int, Account> ::iterator iter1map_end2 = map_accounts.end();
	map <int, Account>::reverse_iterator iter1map_end = map_accounts.rbegin();
	iter1map_start++;
	iter1map_end2--;

	//multimap
	multimap <int, Account> multimap_accounts;
	multimap_accounts.insert(make_pair(1, a1));
	multimap_accounts.insert(make_pair(2, a2));
	multimap_accounts.insert(make_pair(3, a3));
	//iterator4map
	multimap <int, Account> ::iterator iter1multimap_start = multimap_accounts.begin();
	multimap <int, Account> ::iterator iter1multimap_end2 = multimap_accounts.end();
	multimap <int, Account>::reverse_iterator iter1multimap_end = multimap_accounts.rbegin();
	iter1multimap_start++;
	iter1multimap_end2--;

	//stack
	stack <Account> stack_accounts;
	stack_accounts.push(a1);
	stack_accounts.push(a2);
	stack_accounts.push(a3);
	//iterator4stack
	// ≤тератор≥в не ≥снуЇ за визначенн€м

	//queue
	queue <Account> queue_accounts;
	queue_accounts.push(a1);
	queue_accounts.emplace(a2);
	queue_accounts.push(a3);
	//iterator4queue
	// „ерга м≥н≥м≥зуЇ к≥льк≥сть ≥нтерфейс≥в, тому ≥тератор≥в в stl реал≥зац≥њ немаЇ

	//priority_queue
	priority_queue <Account> priority_queue_accounts;
	priority_queue_accounts.push(1);
	priority_queue_accounts.emplace(a2);
	priority_queue_accounts.push(a3);
	//iterator4priority_queue
	//-----------

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