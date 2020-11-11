#include "SciFiLit.h"
#include <string>


SciFiLit::SciFiLit() {

}

SciFiLit::SciFiLit(string author, string name, int year, string field, string level, GenreEnum genre, int ageRating)
{
	SetAuthor(author);
	SetName(name);
	SetYear(year);
	SetField(field);
	SetLevel(level);
	SetGenre(genre);
	SetAgeRating(ageRating);
}


SciFiLit::~SciFiLit() {}

void SciFiLit::Print() {

	SciLit::Print();
	cout << "Худ. Жанр:       " << GetGenreStr() << endl;
	cout << "Возрст. рейтинг: " << _ageRating << endl;
}