#include "Miner.h"

Miner::Miner() {}

void Miner::ChangeState(int newState) {
	// Abans de canviar, cridar la sortida de l'estat
	currentState->Exit();

	switch (newState)
	{
	case 0:
		// Home
		delete currentState;
		currentState = Home::Instance();
		break;
	case 1:
		// Mina
		delete currentState;
		currentState = Mine::Instance();
		break;
	case 2:
		// Bank
		delete currentState;
		currentState = Bank::Instance();
		break;
	case 3:
		// Saloon
		delete currentState;
		currentState = Saloon::Instance();
		break;
	default:
		// Print: No ha trobat l'escena
		break;
	}

	// Cridar l'entrada al nou estat
	currentState->Enter();
}