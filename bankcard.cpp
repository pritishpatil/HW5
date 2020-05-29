#include "bankcard.h"

int BankCard::getAccountNumber()
{
	return accountNumber;
}

int BankCard::getSecurityCode()
{
	return securityCode;
}

void BankCard::setAccountNumber(int newAccountNumber)
{
	accountNumber = newAccountNumber;
}

void BankCard::setSecurityCode(int newSecurityCode)
{
	securityCode = newSecurityCode;
}

void BankCard::readInputs()
{
	Card::readInputs();
	cout << "Account number : " << endl;
	cin >> accountNumber;
	cout << "Card Security Code : " << endl;
	cin >> securityCode;
}

void BankCard::displayCard()
{
	Card::displayCard();
	cout << "|      Account# : " << accountNumber << endl;
	cout << "|       CSC :  " << securityCode << endl;
	cout << "|" << endl;
}
//void Card::displayBankCard()
//{
//	cout << "Institution name : " << institutionName << endl;
//	cout << "Card holder name : " << personName << endl;
//	cout << "Expiration date mmddyyyy (0 if none) : " << expDate << endl;
//	cout << "Account number : " << accountNumber << endl;
//	cout << "Card Security Code : " << securityCode << endl;
//}