﻿/*
Варианты заданий:
1. Лабораторная работа выполняется в Visual Studio 2010-2017 версия.
2. Соблюдение основных принципов ООП и правил хорошего тона (не использовать глобальные переменные и т.д.).
Общая часть задания:
Реализовать базовый класс (указан в варианте) и унаследовать от него 3 разных дочерних класса (на свое усмотрение),
каждый из которых будет добавлять разные поля и методы к базовому классу.
В каждом классе должно быть как минимум 2 поля (в дочерних классах также должно быть как минимум 2 своих поля),
характеризующие объект. Инициализация полей базового класса при создании объекта дочернего класса
должна реализоваться через вызов конструктора базового класса. Реализовать возможность просмотра содержимого.
Продемонстрировать создание, инициализацию полей и работу объектов дочерних классов.
Также необходимо продемонстрировать диаграмму классов.
Все возможные данные вводятся с клавиатуры с проверкой на корректность.
Данные для объектов вводятся в main и передаются в объекты классов через конструкторы.
Память выделять динамически. В случае отсутствия надобности в дальнейшем использовании выделенной памяти
осуществлять освобождение памяти.

3 Литература

*/

#include <iostream>
#include <iomanip>
#include <string>
#include "Lit.h"

#include "FictionLit.h"
#include "SciLit.h"
#include "EducationLit.h"

#include "SciFiLit.h"

int main()
{	
	setlocale(LC_ALL, "ru");

	int size = 4;
	Lit ** lits = new Lit*[size];

	FictionLit f_lit("Автор1", "Название1", 2037, GenreEnum::Genre1, 28);
	SciLit s_lit("Автор2", "Название2", 3056, "Физика", "Магистр");
	EducationLit e_lit("Автор3", "Название3", 1404, "Математика", "5");
	SciFiLit sf_lit("Автор4", "Название4", 9999,"Космос", "Любительский", GenreEnum::Genre3, 28);

	lits[0] = &f_lit;
	lits[1] = &s_lit;
	lits[2] = &e_lit;
	lits[3] = &sf_lit;

	for (int i = 0; i < size; i++)
	{
		lits[i]->Print();
		cout << "-------------------------------" << endl;
	}


	system("pause");
}