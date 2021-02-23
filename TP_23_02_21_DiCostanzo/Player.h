#pragma once
#include "Header.h"

class PNJ;

class Player
{
protected:
	int gold;
	std::vector<PNJ*> crew;

public:

	Player(int a_gold);
	~Player();

	int GetGold();
	void AddGold(int goldToAdd);

	std::string GetCurrentTeam();
	void AddCrewMember(PNJ* memberToAdd);
	int GetCrewSize();
};

