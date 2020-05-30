
/*
PIC 10B 2A, Homework 5
Purpose: Wallet Printer
Author: Pritish Patil
Date: 05/29/2020
*/

#pragma once
#include "card.h"
class BankCard :
	public Card
{
public:

	string getAccountNumber();
	string getSecurityCode();

	void setAccountNumber(string);
	void setSecurityCode(string);

	void readInputs();
	void displayCard();

private: 

	string accountNumber;
	string securityCode;

};

