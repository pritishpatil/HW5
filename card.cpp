
/*
PIC 10B 2A, Homework 5
Purpose: Wallet Printer
Author: Pritish Patil
Date: 05/29/2020
*/

#include "card.h"
#include <iomanip>

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

int Card::getYear()
{
	return year;
}

int Card::getMonth()
{
	return month;
}

int Card::getDay()
{
	return day;
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
	if (expDate != "N/A")
	{
		cout << "|       exp : " << setw(2) << setfill('0') << month << "/" << setw(2) << setfill('0') << day << "/" << setw(4) << setfill('0') << year << endl;
	}
	else
	{
		cout << "|       exp : " << expDate << endl;
	}
	cout << "|" << endl;
}

void Card::readInputs()
{
	cout << endl;
	cout << "Institution Name : ";
	getline(cin, institutionName);
	cout << "Card holder name : ";
	getline(cin, personName);
	cout << "Expiration date mmddyy (0 if none) : ";
	cin >> expDate;
	if (expDate == "0")
	{
		expDate = "N/A";
		year = INT_MAX;
		month = 0;
		day = 0;
	}
	else
	{
		parseDate(expDate);
	}
}

void Card::parseDate(string expDate)
{
	month = stoi(expDate.substr(0, 2));
	day = stoi(expDate.substr(2, 2));
	year = stoi(expDate.substr(4, 4));
}



