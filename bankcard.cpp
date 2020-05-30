
/*
PIC 10B 2A, Homework 5
Purpose: Wallet Printer
Author: Pritish Patil
Date: 05/29/2020
*/

#include "bankcard.h"

string BankCard::getAccountNumber()
{
	return accountNumber;
}

string BankCard::getSecurityCode()
{
	return securityCode;
}

void BankCard::setAccountNumber(string newAccountNumber)
{
	accountNumber = newAccountNumber;
}

void BankCard::setSecurityCode(string newSecurityCode)
{
	securityCode = newSecurityCode;
}

void BankCard::readInputs()
{
	Card::readInputs();
	cout << "Account number : ";
	cin >> accountNumber;
	cout << "Card Security Code : ";
	cin >> securityCode;
}

void BankCard::displayCard()
{
	Card::displayCard();
	cout << "|  Account# : " << accountNumber << endl;
	cout << "|       CSC : " << securityCode << endl;
	cout << "|" << endl;
}
