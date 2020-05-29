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
	
	void setInstitutionName(string);
	void setPersonName(string);
	void setExpDate(string);
	
	virtual void readInputs();
	virtual void displayCard();
	
private: 
	
	string institutionName;
	string personName;
	string expDate;
	
};

