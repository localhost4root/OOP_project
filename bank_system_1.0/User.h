#pragma once
#include "Person.h"
#include "Administrator.h"
#include "Account.h"
#include "Order.h"
#include "Junior_client.h"
#include "Retirement_client.h"
#include <vector>
#include <iostream>
using namespace std;
class Administrator;
class Order;
class Account;
class Junior_client;
class Retirement_client;
class User  
{
    Junior_client client_j;
    Retirement_client client_r;
    vector<Administrator*> administrators;
    vector<Order*>orders;
    vector<Account>accounts;

public:
    User() 
    {
        int tmp;
        cout << "Input 1- to add information about junior user" <<endl << "Input 2- to add information about retirement user" << endl;
        cin >> tmp;
        if (tmp == 1)
        {
            cout << "Input parent name: ";
            cin >> client_j.parent_Name;
            cout<< endl << "Input parent surname: ";
            cin >> client_j.parent_Surname;
            cout << endl << "Input parent date of birth: ";
            cin >> client_j.parent_date_of_birth;
        }
        else if (tmp == 2)
        {
            cout << "Input number of insurance: ";
            cin >> client_r.number_insurance;
            cout << endl << "Input date of birth: ";
            cin >> client_r.date_of_birth;

        }
        else {
            cout << "Uncorrect input";
        }
    };
    
    virtual ~User()
    {
        cout << "User virtual destructor works"<< endl;
    }
    
    void addOrder(Order* order);
    
    void addAdministrator(Administrator* administrator);
    void addAccount(Account account);
   /* void dumpData();*/
    void payFromOneAccount_ToOther(int number_of_account, int number_of_recipient, double sum);
    
    friend class Administrator;
   
};

