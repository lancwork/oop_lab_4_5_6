#pragma once
#include "Lit.h"
#include <string>
using namespace std;

/*���. ���.*/
class FictionLit : public virtual Lit
{
protected:
	string _genre;	//����
	int _ageRating;		//���������� �������

public:
	FictionLit();
	FictionLit(string author, string name, int year, string genre, int ageRating);

	~FictionLit();

	void SetGenre(string genre);
	string GetGenre();

	void SetAgeRating(int ageRating);
	int GetAgeRating();

	virtual void Print();

	virtual void Test();
};


