#include <iostream>
#include <iomanip>
#include <string>
#include "Lit.h"

#include "FictionLit.h"
#include "SciLit.h"
#include "EducationLit.h"

#include "SciFiLit.h"

#include<iostream>
#include<Windows.h>

int GetInt(string msg)
{
	cout << msg;

	int buf;
	while (!(cin >> buf))
	{
		cout << "Некорректное значение. Введите число.\n";
		cin.clear();
		cin.ignore(INT_MAX, '\n');
		cout << msg;
	}
	return buf;
}

string GetString(string msg)
{
	cout << msg;
	string result;

	cin >> result;

	return result;
}

int main()
{
	setlocale(LC_ALL, "ru");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int size = 4;
	Lit ** lits = new Lit*[size];


	string autor;
	string name;
	int year;

	string ganre;
	int age;

	string field;
	string level;

	string discipline;

	string des;

	//cout << "Заполнение Художественной Литературы" << endl;
	//autor = GetString("Введите автора: ");
	//name = GetString("Введите название: ");
	//year = GetInt("Введите год: ");
	//ganre = GetString("Введите жанр: ");
	//age = GetInt("Введите возрастной рейтинг: ");
	//FictionLit f_lit(autor, name, year, ganre, age);
	//cout << endl;

	//cout << "Заполнение Научная Литературы" << endl;
	//autor = GetString("Введите автора: ");
	//name = GetString("Введите название: ");
	//year = GetInt("Введите год: ");
	//field = GetString("Введите научную область: ");
	//level = GetString("Введите науч. степень автора: ");
	//SciLit s_lit(autor, name, year, field, level);
	//cout << endl;

	//cout << "Заполнение Учебная Литературы" << endl;
	//autor = GetString("Введите автора: ");
	//name = GetString("Введите название: ");
	//year = GetInt("Введите год: ");
	//discipline = GetString("Введите название предмета: ");
	//level = GetString("Введите класс: ");
	//EducationLit e_lit(autor, name, year, discipline, level);
	//cout << endl;

	Lit qwe();


	cout << "Заполнение Научной Фантастики" << endl;
	autor = GetString("Введите автора: ");
	name = GetString("Введите название: ");
	year = GetInt("Введите год: ");
	field = GetString("Введите научную область: ");
	level = GetString("Введите науч. степень автора: ");
	ganre = GetString("Введите жанр: ");
	age = GetInt("Введите возрастной рейтинг: ");
	des = GetString("Введите описание: ");
	SciFiLit sf_lit(autor, name, year, field, level, ganre, age, des);
	cout << endl;
	
	sf_lit.Print();
	sf_lit.SciLit::Test();
	sf_lit.FictionLit::Test();



	//	GetString("Введите жанр: "),	//ganre
	//	GetInt("Введите возрастной рейтинг: ")	//ageration

	//cout << "Заполнение Художественной Литературы" << endl;
	//FictionLit f_lit(
	//	GetString("Введите автора:1 "),	//author
	//	GetString("Введите название:2 "),//name
	//	GetInt("Введите год:3 "),		//year

	//	GetString("Введите жанр:4 "),	//ganre
	//	GetInt("Введите возрастной рейтинг:5 ")	//ageration
	//);
	//cout << endl;

	//cout << "Заполнение Научная Литературы" << endl;
	//SciLit s_lit(
	//	GetString("Введите автора: "),	//author
	//	GetString("Введите название: "),//name
	//	GetInt("Введите год : "),		//year

	//	GetString("Введите научную область: "),		//field
	//	GetString("Введите науч. степень автора: ")	//level
	//);
	//cout << endl;

	//cout << "Заполнение Учебная Литературы" << endl;
	//EducationLit e_lit(
	//	GetString("Введите автора: "),	//author
	//	GetString("Введите название: "),//name
	//	GetInt("Введите год : "),		//year

	//	GetString("Введите название предмета: "),	//discipline
	//	GetString("Введите класс: ")				//level
	//);
	//cout << endl;

	//cout << "Заполнение Научной Фантастики" << endl;
	//SciFiLit sf_lit(
	//	GetString("Введите автора: "),	//author
	//	GetString("Введите название: "),//name
	//	GetInt("Введите год : "),		//year

	//	GetString("Введите научную область: "),		//field
	//	GetString("Введите науч. степень автора: "),//level

	//	GetString("Введите жанр: "),	//ganre
	//	GetInt("Введите возрастной рейтинг: ")	//ageration
	//);

	/*FictionLit f_lit("Автор1", "Название1", 2037, GenreEnum::Genre1, 28);
	SciLit s_lit("Автор2", "Название2", 3056, "Физика", "Магистр");
	EducationLit e_lit("Автор3", "Название3", 1404, "Математика", "5");
	SciFiLit sf_lit("Автор4", "Название4", 9999,"Космос", "Любительский", GenreEnum::Genre3, 28);
	*/
	//lits[0] = &f_lit;
	//lits[1] = &s_lit;
	//lits[2] = &e_lit;
	//lits[3] = &sf_lit;
	//cout << "===================================" << endl;
	//for (int i = 0; i < size; i++)
	//{
	//	lits[i]->Print();
	//	cout << "-------------------------------" << endl;
	//}

	system("pause");
}