#include "FictionLit.h"
#include <string>

FictionLit::FictionLit()
	: Lit()
{
}

FictionLit::FictionLit(string author, string name, int year, string genre, int ageRating)
	: Lit(author, name, year)
{
	SetGenre(genre);
	SetAgeRating(ageRating);
}

FictionLit::~FictionLit()
{
}

void FictionLit::SetGenre(string genre)
{
	_genre = genre;
}

string FictionLit::GetGenre()
{
	return _genre;
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
	setlocale(LC_ALL, "ru");
	//Lit::Print();

	cout << "�����:    '" << typeid(*this).name() << "'" << endl;
	cout << "��������: " << _name << endl;
	cout << "�����:    " << _author << " ���: " << _year << endl;

	cout << "���. ����:       " << _genre << endl;
	cout << "������. �������: " << _ageRating << endl;
}

void FictionLit::Test() {
	cout << "2test FictionLit" << endl;
}