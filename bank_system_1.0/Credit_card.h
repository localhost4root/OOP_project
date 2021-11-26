#pragma once
#include "Account.h"
#include "Order.h"
#include <cstdbool>
using namespace std;
class Order;
class Account;
class Credit_card
{
	double balance;
	double limit;
	bool is_my_CC_blocked;
	vector<Order*> orders;
	Account* account;
public:
	Credit_card(double balance, double limit, bool is_my_CC_blocked) : balance(balance), limit(limit), is_my_CC_blocked(is_my_CC_blocked)
	{		};
	Credit_card() : balance(0), limit(0), is_my_CC_blocked(false)
	{		};
	
	
	void addOrder(Order* order);
	void addAccount(Account* account);
	void blockCC();
	bool checkCC();
	friend class Order;
	friend class Account;

	//1
	friend Credit_card& operator ++(Credit_card& ob1) { ob1.balance+100; return ob1; } // ++ob1
	friend Credit_card& operator ++(Credit_card& ob, int) { ob.balance+100; return ob; }   //ob1++
	friend Credit_card& operator --(Credit_card& ob1) { ob1.balance - 100; return ob1; } // --ob1
	friend Credit_card& operator --(Credit_card& ob, int) { ob.balance - 100; return ob; }   //ob1--

	//2
	/*friend Credit_card& operator-(Credit_card& tmp) { tmp.limit - 100; return tmp; } 
	friend Credit_card& operator+(Credit_card& tmp) { tmp.limit + 100; return tmp; }*/
};

