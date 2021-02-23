#pragma once
#include "PNJ.h"
class King :  public PNJ
{
protected:
	Arme arme = Arme::Tonneau;
public:
	King();
	~King();
	void Recrute();
	virtual void Talk();
};

