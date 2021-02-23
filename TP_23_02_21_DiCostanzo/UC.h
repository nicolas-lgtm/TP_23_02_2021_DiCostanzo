#pragma once
#include "PNJ.h"

class UC : public PNJ
{
protected:
	Arme arme;
public:
	UC();
	~UC();
	void Recruter();
	virtual void Talk();

	void SetWeapon();
	Arme GetWeapon();
};

