#include "FictionLit.h"
#include <string>

FictionLit::FictionLit()
	: Lit()
{
}

FictionLit::FictionLit(string author, string name, int year, GenreEnum genre, int ageRating)
	: Lit(author, name, year)
{
	SetGenre(genre);
	SetAgeRating(ageRating);
}

FictionLit::~FictionLit()
{
}

void FictionLit::SetGenre(GenreEnum genre)
{
	_genre = genre;
}

GenreEnum FictionLit::GetGenre()
{
	return _genre;
}

string FictionLit::GetGenreStr()
{
	switch (_genre)
	{
	case Genre1:
		return "����_1";
	case Genre2:
		return "����_2";
	case Genre3:
		return "����_3";
	default:
		return "��� �����";
		break;
	}
}

void FictionLit::SetAgeRating(int ageRating)
{
	_ageRating = ageRating;
}

int FictionLit::GetAgeRating()
{
	return _ageRating;
}

void FictionLit::Print()
{
	Lit::Print();
	cout << "���. ����:       " << GetGenreStr() << endl;
	cout << "������. �������: " << _ageRating << endl;
}
