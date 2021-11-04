#pragma once
#include "Person.h"
#include "Administrator.h"
#include "Account.h"
#include "Order.h"
#include "Junior_client.h"
#include <vector>
#include <iostream>
using namespace std;
class Administrator;
class Order;
class Account;
class User : protected Person, private Junior_client
{
   vector<Administrator*> administrators;
   vector<Order*>orders;
   vector<Account>accounts;

public:
    User(string name, string surname, string identification_number, string parent_Name = "-", string parent_Surname = "-", string parent_date_of_birth = "-") : Person(name, surname, identification_number), 
        Junior_client(parent_Name, parent_Surname, parent_date_of_birth)
    {		
        
    };
    void addOrder(Order* order);
    
    void addAdministrator(Administrator* administrator);
    void addAccount(Account account);
    void dumpData();
    void payFromOneAccount_ToOther(int number_of_account, int number_of_recipient, double sum);
    friend class Administrator;
    
};

