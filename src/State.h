#pragma once

class State {
public:
	virtual void Enter() = 0;
	virtual void Update();
	virtual void Exit();

};