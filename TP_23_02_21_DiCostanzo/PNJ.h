#pragma once
#include "Header.h"

class PNJ
{
protected:
	Arme arme;
	bool isDead;
public:
	PNJ();
	~PNJ();

	void Talk();

	void SetIsDead(bool a_isDead);
	bool GetIsDead();
};

//class Queen : public PNJ
//{
//protected:
//	Arme arme = Arme::Sceptre;
//public :
//	Queen();
//	~Queen();
//	void Recrute();
//};

