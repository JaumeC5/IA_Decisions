#pragma once
#include "Agent.h"
#include "State.h"

class Miner :public Agent {
	
	Miner();
	
	State* currentState;

	// 0 = Home / 1 = Mine / 2 = Bank / 3 = Saloon
	void ChangeState(int newState);

};