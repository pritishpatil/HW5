#include "idcard.h"

IDCard::IDCard() : IDNumber(0), dateOfBirth("") {}

IDCard::IDCard(int newIDNumber, string newDateOfBirth) : IDNumber(newIDNumber), dateOfBirth(newDateOfBirth) {}

int IDCard::getIDNumber()
{
	return IDNumber;
}

string IDCard::getDateOfBirth()
{
	return dateOfBirth;
}

void IDCard::setIDNumber(int newIDNumber)
{
	IDNumber = newIDNumber;
}

void IDCard::setDateOfBirth(string newDateOfBirth)
{
	dateOfBirth = newDateOfBirth;
}

void IDCard::readInputs()
{
	Card::readInputs();
	cout << "ID number : " << endl;
	cin >> IDNumber;
	cout << "DOB mmddyyyy (0 if not listed) : " << endl;
	cin >> dateOfBirth;
}

void IDCard::displayCard()
{
	Card::displayCard();
	cout << "|      ID# : " << IDNumber << endl;
	cout << "|       DOB :  " << dateOfBirth << endl;
	cout << "|" << endl;
}

