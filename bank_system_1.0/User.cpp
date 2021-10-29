#include "User.h"
#include "Account.h"
#include <vector>
using namespace std;

void User::addAdministrator(Administrator* administrator)
{
	administrators.push_back(administrator);
	administrator->addUser(this);
}
//void User::addAccount(Account account)
//{
//	accounts.push_back(account);
//}

//void User::setOrder(Order* order)
//{
//	orders.push_back(order);
//}