#pragma once
#include "Account.h"
#include "Order.h"
#include <cstdbool>
using namespace std;
class Order;
class Account;
class Credit_card
{
	int balance;
	double limit;
	bool is_my_CC_blocked;
	vector<Order*> orders;
	Account* account;
public:
	Credit_card(int balance, double limit=1000, bool is_my_CC_blocked=false) : balance(balance), limit(limit), is_my_CC_blocked(is_my_CC_blocked)
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
	Credit_card& operator++(); //    ++a
	Credit_card& operator--(); //    --a
	Credit_card operator++(int); //  a++
	Credit_card operator--(int);//   a--
	
	friend std::ostream& operator<< (std::ostream &out, const Credit_card &n);
	
	

	//2
	friend Credit_card operator+(const Credit_card& d1, const Credit_card& d2);
	friend Credit_card operator-(const Credit_card& d1, const Credit_card& d2);

	//3
	friend Credit_card operator*(const Credit_card& d1, const Credit_card& d2);
	Credit_card& operator += (Credit_card c2);
	Credit_card& operator -= (Credit_card c2);
	Credit_card& operator *= (Credit_card c2);
	

	
};

