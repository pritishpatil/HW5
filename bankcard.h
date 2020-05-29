#pragma once
#include "card.h"
class BankCard :
	public Card
{
public:

	int getAccountNumber();
	int getSecurityCode();

	void setAccountNumber(int);
	void setSecurityCode(int);

	void readInputs();
	void displayCard();

private: 

	int accountNumber;
	int securityCode;

};

