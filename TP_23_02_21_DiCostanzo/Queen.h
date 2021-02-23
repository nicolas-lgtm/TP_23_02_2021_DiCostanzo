#pragma once
#include "PNJ.h"

class Queen : public PNJ
{
protected:
	Arme arme = Arme::Sceptre;
public :
	Queen();
	~Queen();
	virtual void Talk();

	void Recrute();
};

