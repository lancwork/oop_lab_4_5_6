#include "SciFiLit.h"
#include <string>


SciFiLit::SciFiLit() {

}

SciFiLit::SciFiLit(string author, string name, int year, string field, string level, string genre, int ageRating, string des)
{
	SetAuthor(author);
	SetName(name);
	SetYear(year);
	SetField(field);
	SetLevel(level);
	SetGenre(genre);
	SetAgeRating(ageRating);
	_des = des;
}


SciFiLit::~SciFiLit() {}

void SciFiLit::Print() {

	//SciLit::Print();

	cout << "Класс:    '" << typeid(*this).name() << "'" << endl;
	cout << "Название: " << _name << endl;
	cout << "Автор:    " << _author << " Год: " << _year << endl;

	cout << "Научная область:     " << _field << endl;
	cout << "Науч степень автора: " << _level << endl;

	cout << "Худ. Жанр:       " << _genre << endl;
	cout << "Возрст. рейтинг: " << _ageRating << endl;

	cout << "Описание " << _des << endl;
}

