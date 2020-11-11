#pragma once
#include "FictionLit.h"
#include "SciLit.h"

/*Научная Фантастика*/
class SciFiLit : public virtual FictionLit, public virtual SciLit
{
protected:


public:
	SciFiLit();
	SciFiLit(string author, string name, int year, string field, string level, GenreEnum genre, int ageRating);

	~SciFiLit();

	virtual void Print();
};

