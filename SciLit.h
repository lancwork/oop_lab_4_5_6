#pragma once
#include "Lit.h"
#include <string>
/*���� ���*/
class SciLit : public virtual Lit
{
protected:
	string _field;//���� �������/������� ������������
	string _level;//���� �������

public:
	SciLit();
	SciLit(string author, string name, int year, string field, string level);

	~SciLit();

	void SetField(string field);
	string GetField();

	void SetLevel(string level);
	string GetLevel();

	virtual void Print();

	virtual void Test();
};

