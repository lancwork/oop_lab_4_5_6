#include "Lit.h"
#include <string>
#include <iomanip>

using namespace std;

Lit::Lit()
{
	SetAuthor("");
	SetName("");
	SetYear(0);
}

Lit::Lit(string author, string name, int year)
{
	SetAuthor(author);
	SetName(name);
	SetYear(year);
}

Lit::~Lit() {}

void Lit::SetAuthor(string author)
{
	_author = author;
}

string Lit::GetAuthor()
{
	return _author;
}

void Lit::SetName(string name)
{
	_name = name;
}

string Lit::GetName()
{
	return _name;
}

void Lit::SetYear(int year)
{
	_year = year;
}

int Lit::GetYear()
{
	return _year;
}

//void Lit::Print()
//{	
//	cout << "Класс:    '" << typeid(*this).name() << "'" << endl;
//	cout << "Название: " << _name << endl;
//	cout << "Автор:    " << _author << " Год: " << _year << endl;
//}