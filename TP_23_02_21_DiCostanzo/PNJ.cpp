#include "PNJ.h"

PNJ::PNJ() {
	SetIsDead(false);
}

PNJ::~PNJ() { SetIsDead(true); }

void PNJ::Talk() {

}


void PNJ::SetIsDead(bool a_isDead) { isDead = a_isDead; }
bool PNJ::GetIsDead() { return isDead; }