#include "UC.h"

UC::UC(){ }
UC::~UC(){ }

void UC::Recruter() {
	if (player->GetGold() >= 5000 && player->GetCrewSize() < 2) {
		player->AddGold(-5000);
		player->AddCrewMember(this);
	}
	else {
		cout << "Recrutement impossible... " << endl;
		SetIsDead(true);
	}
}

void UC::SetWeapon() {
	int r = rand() % 4;

	switch (r) {
		case 0:
			arme = Arme::Arc;
			break;
		case 1:
			arme = Arme::Epee;
			break;
		case 2:
			arme = Arme::Hache;
			break;
		default:
			arme = Arme::Baton;
		break;
	}
}

void UC::Talk() {
	std::cout << "Coucou, c'est le Universal Commander ! :@" << endl;
}