#pragma once
#include "Agent.h"
#include "State.h"
#include "ScenePlanning.h"


class Miner :public Agent {
	
public:

	Miner();
	
	State* currentState = Mine::Instance();

	// 0 = Home / 1 = Mine / 2 = Bank / 3 = Saloon
	void ChangeState(int newState);

};