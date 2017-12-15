#include "State.h"

class Mine :public State {
private:
	static Mine *mine;
	Mine();
public:
	void Enter();
	void Update();
	void Exit();

	static Mine *Instance()
	{
		if (mine == nullptr) { mine = new Mine; }
		return mine;
	}
};