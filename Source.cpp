#include <iostream>
#include <iomanip>
#include "Literature.h"

using namespace std;
/*
�������� �������:
1. ������������ ������ ����������� � Visual Studio 2010-2017 ������.
2. ���������� �������� ��������� ��� � ������ �������� ���� (�� ������������ ���������� ���������� � �.�.).
����� ����� �������:
����������� ������� ����� (������ � ��������) � ������������ �� ���� 3 ������ �������� ������ (�� ���� ����������),
������ �� ������� ����� ��������� ������ ���� � ������ � �������� ������. 
� ������ ������ ������ ���� ��� ������� 2 ���� (� �������� ������� ����� ������ ���� ��� ������� 2 ����� ����), 
��������������� ������. ������������� ����� �������� ������ ��� �������� ������� ��������� ������ 
������ ������������� ����� ����� ������������ �������� ������. ����������� ����������� ��������� �����������. 
������������������ ��������, ������������� ����� � ������ �������� �������� �������. 
����� ���������� ������������������ ��������� �������.
��� ��������� ������ �������� � ���������� � ��������� �� ������������. 
������ ��� �������� �������� � main � ���������� � ������� ������� ����� ������������. 
������ �������� �����������. � ������ ���������� ���������� � ���������� ������������� ���������� ������ 
������������ ������������ ������.

3 ����������



*/


int main()
{
	setlocale(LC_ALL, "ru");
	Literature lit("123");
	lit.Print();

	system("pause");
}
