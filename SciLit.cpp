#include "SciLit.h"
#include <string>

SciLit::SciLit()
{
}

SciLit::SciLit(string author, string name, int year, string field, string level)
	: Lit(author, name, year)
{
	SetField(field);
	SetLevel(level);
}

SciLit::~SciLit()
{
}

void SciLit::SetField(string field)
{
	_field = field;
}

string SciLit::GetField()
{
	return _field;
}

void SciLit::SetLevel(string level)
{
	_level = level;
}

string SciLit::GetLevel()
{
	return _level;
}

void SciLit::Print()
{
	Lit::Print();
	cout << "Научная область:     " << _field << endl;
	cout << "Науч степень автора: " << _level << endl;
}
