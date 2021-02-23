#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <deque>
#include <map>
#include <set>
#include <type_traits>
#include "Vecteur.h"
#include "Player.h"
#include "GW.h"

#pragma warning (disable:4996)

using namespace std;

class Player;

Player* player;
vector<PNJ*> allPNJ;

void InitGame();
void CreateAllPNJ();
bool PlayerWin421();

enum class Arme
{
	Arc,
	Epee,
	Hache,
	Baton,
	Sceptre,
	Tonneau
};