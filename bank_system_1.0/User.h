#pragma once
#include "Person.h"
#include "Administrator.h"
#include "Account.h"
#include "Order.h"
#include <vector>
#include <iostream>
using namespace std;
class Administrator;
class Order;
class Account;
class User : protected Person
{
   vector<Administrator*> administrators;
   vector<Order*>orders;
   vector<Account>accounts;

public:
    User(string name, string surname, string identification_number) : Person(name, surname, identification_number)
    {		
        
    };
    void addOrder(Order* order);
    
    void addAdministrator(Administrator* administrator);
    void addAccount(Account account);
    void dumpData();
    void payFromOneAccount_ToOther(int number_of_account, int number_of_recipient, double sum);
    friend class Administrator;
    
};

