
/*
PIC 10B 2A, Homework 5
Purpose: Wallet Printer
Author: Pritish Patil
Date: 05/29/2020
*/

#include "idcard.h"

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
	cout << "ID number : ";
	cin >> IDNumber;
	cout << "DOB mmddyyyy (0 if not listed) : ";
	cin >> dateOfBirth;
	if (dateOfBirth == "0")
	{
		dateOfBirth = "N/A";
	}
}

void IDCard::displayCard()
{
	Card::displayCard();
	cout << "|       ID# : " << IDNumber << endl;
	cout << "|       DOB : " << dateOfBirth << endl;
	cout << "|" << endl;
}

