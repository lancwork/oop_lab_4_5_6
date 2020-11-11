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
		return "Жанр_1";
	case Genre2:
		return "Жанр_2";
	case Genre3:
		return "Жанр_3";
	default:
		return "Без жанра";
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
	cout << "Худ. Жанр:       " << GetGenreStr() << endl;
	cout << "Возрст. рейтинг: " << _ageRating << endl;
}
