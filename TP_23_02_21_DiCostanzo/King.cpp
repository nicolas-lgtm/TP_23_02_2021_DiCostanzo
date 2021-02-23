#include "King.h"

void King::Recrute() {
	if (PlayerWin421()) {
		std::cout << "Vous avez gagne au 421 ! Vous recrutez le roi dans votre équipe";
		player->AddCrewMember(this);
	}
	else {
		std::cout << "Vous avez perdu au 421...";
		SetIsDead(true);
	}
}

void King::Talk() {
	std::cout << "Coucou, c'est le roi ! :)" << endl;
}

