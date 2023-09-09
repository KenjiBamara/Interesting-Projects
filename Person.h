#pragma once
#include <string>
#include <sstream>
#include<iostream>

using namespace std;

class Person
{
private:
	//Data Members
	string pname;
	string email;
public:
	//Accessors
	string getName() { return pname; }
	string getEmail() { return email; }

	//Mutators
	void setName(string nameValue)
	{
		pname = nameValue;
		for (int i = 0; i < pname.size(); i++)
		{
			pname[i] = toupper(pname[i]);
		}
		this->pname = pname;
	}
	void setEmail(string emailValue)
	{
		email = emailValue;
		for (int i = 0; i < email.size(); i++)
		{
			email[i] = tolower(email[i]);
		}
		this->email = email;
	}
	//Construtors
		//Zero-Argument
	Person()
	{
		pname = "n.a";
		email = "n.a";
	}
	//Two-argument
	Person(string pname, string email)
	{
		setName(pname);
		setEmail(email);
	}


	//User-Defined Methods
	string toString();
};

//Implementaion

string Person::toString()
{
	stringstream sout;
	sout << this << " " << "Person [Name: " << pname << ", Email: " << email << "]";
	return sout.str();
}