#include "card.h"

Card::Card() : institutionName(""), personName(""), expDate("") {}

Card::Card(string newInstitutionName, string newPersonName, string newExpDate)
{
	institutionName = newInstitutionName;
	personName = newPersonName;
	expDate = newExpDate;
}

string Card::getInstitutionName()
{
	return institutionName;
}

string Card::getPersonName()
{
	return personName;
}

string Card::getExpDate()
{
	return expDate;
}

void Card::setInstitutionName(string newInstitutionName)
{
	institutionName = newInstitutionName;
}

void Card::setPersonName(string newPersonName)
{
	personName = newPersonName;
}

void Card::setExpDate(string newExpDate)
{
	expDate = newExpDate;
}

void Card::displayCard()
{
	cout << "|" << endl;
	cout << "| " << institutionName << endl;
	cout << "|      name : " << personName << endl;
	cout << "|       exp :  " << expDate << endl;
	cout << "|" << endl;
}

void Card::readInputs()
{
	cout << "Institution Name : " << endl;
	cin >> institutionName;
	cout << "Card holder name : " << endl;
	cin >> personName;
	cout << "Expiration date mmddyy (0 if none) : " << endl;
	cin >> expDate;
}

