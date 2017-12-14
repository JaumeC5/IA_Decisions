#include "State.h"

class Home :public State {
	virtual void Enter();
	void Update();
	void Exit();
};