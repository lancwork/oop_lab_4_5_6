#pragma once
#include "FictionLit.h"
#include "SciLit.h"
#include "string"

/*Научная Фантастика*/
class SciFiLit : public virtual FictionLit, public virtual SciLit, public virtual Lit
{

public:
	string _des;
	SciFiLit();
	SciFiLit(string author, string name, int year, string field, string level, string genre, int ageRating, string des);

	~SciFiLit();

	virtual void Print();
};
