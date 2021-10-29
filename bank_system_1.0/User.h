#pragma once
#include "Person.h"
#include "Administrator.h"
#include "Account.h"
#include "Order.h"
#include <vector>
#include <iostream>
using namespace std;
class Administrator;

class User : protected Person
{
   vector<Administrator*> administrators;
   
   

public:
    User(string name, string surname, string identification_number) : Person(name, surname, identification_number)
    {		
    
    };
    void addAdministrator(Administrator* administrator);
    /*void setOrder(Order* order);*/
    /*void addAccount(Account account);*/

    friend class Administrator;
    
};

