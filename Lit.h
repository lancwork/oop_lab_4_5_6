#pragma once

#include <iostream>
#include <string>
#include <ctime>
#include <typeinfo>

using namespace std;

class Lit
{	
protected:
	 string _name;
	 string _author;
	 int _year;
public:
	Lit();
	Lit(string author, string name, int year);

	~Lit();

	void SetAuthor(string author);
	string GetAuthor();

	void SetName(string name);
	string GetName();

	void SetYear(int year);
	int GetYear();

	virtual void Print();
};

