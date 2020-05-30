
/*
PIC 10B 2A, Homework 5
Purpose: Wallet Printer
Author: Pritish Patil
Date: 05/29/2020
*/

#pragma once
#include <string>
#include <iostream>
using namespace std;

class Card
{
public: 

	Card();
	Card(string, string, string);

	string getInstitutionName();
	string getPersonName();
	string getExpDate();
	int getYear();
	int getMonth();
	int getDay();
	
	void setInstitutionName(string);
	void setPersonName(string);
	void setExpDate(string);
	void parseDate(string);

	virtual void readInputs();
	virtual void displayCard();
	
	
private: 
	
	int month;
	int day;
	int year;
	
	string institutionName;
	string personName;
	string expDate;
	
};

