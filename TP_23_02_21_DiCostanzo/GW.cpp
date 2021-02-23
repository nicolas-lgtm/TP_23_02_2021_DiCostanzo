#include "Header.h"

void GW::Soudoyer() {
	int result = rand() % 10;

	cout << result << endl;

	if (result <= 4) player->AddGold(3000);

	this->~GW();
}

void GW::Talk() {
	std::cout << "Coucou, c'est le Galactic Warrior ! :O" << endl;
}