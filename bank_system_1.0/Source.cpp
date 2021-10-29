#include <iostream>
#include "Administrator.h"
#include "User.h"
using namespace std;
int main()
{
	Administrator* p1 = new Administrator("Anton", "AA", "15");
	
	Order* v1 = new Order("test", 20);
	Credit_card* c1 = new Credit_card(100, 1000, false);
	// Создаем Докторов вне области видимости класса Patient
	User* d1 = new User("John", "DD", "18");
	
	Account* a1 = new Account(200, 100);
	d1->addAdministrator(p1);
	/*d1->addAccount(r);*/
	a1->addCredit_card(c1);

	c1->addOrder(v1);
	p1->addUser_credit_card(c1);

	delete p1;
	

	delete d1;
	

	return 0;
}