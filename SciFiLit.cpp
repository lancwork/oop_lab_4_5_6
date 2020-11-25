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

	cout << "�����:    '" << typeid(*this).name() << "'" << endl;
	cout << "��������: " << _name << endl;
	cout << "�����:    " << _author << " ���: " << _year << endl;

	cout << "������� �������:     " << _field << endl;
	cout << "���� ������� ������: " << _level << endl;

	cout << "���. ����:       " << _genre << endl;
	cout << "������. �������: " << _ageRating << endl;

	cout << "�������� " << _des << endl;
}

