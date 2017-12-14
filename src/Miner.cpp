#include "Miner.h"

Miner::Miner() {}

void Miner::ChangeState(int newState) {
	switch (newState)
	{
	case 0:
		// Home
		break;
	case 1:
		// Mina
		break;
	case 2:
		// Bank
		break;
	case 3:
		// Saloon
		currentState->Exit();
		// Assignar Saloon a la current scene
		break;
	default:
		// Print: No ha trobat l'escena
		break;
	}
}