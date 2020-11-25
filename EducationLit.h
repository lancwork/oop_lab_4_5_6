#pragma once
#include "Lit.h"
#include <string>

/*Учеб Лит*/
class EducationLit : public virtual Lit
{
protected:	
	string _discipline;	//предмет
	string _level;		//Класс №

public:
	EducationLit();
	EducationLit(string author, string name, int year, string discipline, string level);

	~EducationLit();

	void SetDiscipline(string discipline);
	string GetDiscipliner();

	void SetLevel(string level);
	string GetLevel();

	virtual void Print();
};

