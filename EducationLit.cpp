#include "EducationLit.h"
#include <string>

EducationLit::EducationLit()
{
}

EducationLit::EducationLit(string author, string name, int year, string discipline, string level)
	: Lit(author, name, year)
{
	SetDiscipline(discipline);
	SetLevel(level);
}

EducationLit::~EducationLit()
{
}

void EducationLit::SetDiscipline(string discipline)
{
	_discipline = discipline;
}

string EducationLit::GetDiscipliner()
{
	return _discipline;
}

void EducationLit::SetLevel(string level)
{
	_level = level;
}

string EducationLit::GetLevel()
{
	return _level;
}

void EducationLit::Print()
{
	Lit::Print();
	cout << "Название Предмета: '" << _discipline << endl;
	cout << "Класс: " << _level << endl;
}
