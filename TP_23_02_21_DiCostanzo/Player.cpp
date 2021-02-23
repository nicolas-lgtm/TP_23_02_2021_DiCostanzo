#include "Player.h"

Player::Player(int a_gold) {
	gold = a_gold;
}

Player::~Player() {

}


int Player::GetGold() { return gold; }

void Player::AddGold(int goldToAdd) {
	gold += goldToAdd;
}



std::string Player::GetCurrentTeam() {
	cout << "team" << endl;
}

void Player::AddCrewMember(PNJ* memberToAdd) {
	if (crew.size() < 2) {
		crew.push_back(memberToAdd);
	}
}

int Player::GetCrewSize() { return crew.size(); }
