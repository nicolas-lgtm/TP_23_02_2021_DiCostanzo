#include "Queen.h"

void Queen::Recrute() {
	if (PlayerWin421()) {
		cout << "Vous avez gagne au 421 ! Vous recrutez le roi dans votre équipe";
		player->AddCrewMember(this);
	}
	else {
		cout << "Vous avez perdu au 421...";
		SetIsDead(true);
	}
}

void Queen::Talk() {
	std::cout << "Coucou, c'est la reine ! :)" << endl;
}