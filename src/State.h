#pragma once
#include "ScenePlanning.h"

class State {
public:

	virtual void Enter();
	virtual void Update();
	virtual void Exit();
};