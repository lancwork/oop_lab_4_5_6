#pragma once
#include "Lit.h"
#include <string>
using namespace std;

enum GenreEnum { Genre1, Genre2, Genre3};

/*���. ���.*/
class FictionLit : public virtual Lit
{
protected:
	GenreEnum _genre;//����
	int _ageRating; //���������� �������

public:
	FictionLit();
	FictionLit(string author, string name, int year, GenreEnum genre, int ageRating);

	~FictionLit();

	void SetGenre(GenreEnum genre);
	GenreEnum GetGenre();
	string GetGenreStr();

	void SetAgeRating(int ageRating);
	int GetAgeRating();

	virtual void Print();

};


