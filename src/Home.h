#include "State.h"
#include "Agent.h"

class Home :public State {
private:
	static Home *home;
	Home();
public:
	void Enter();
	void Update(Agent* agent);
	void Exit();

	static Home *Instance()
	{
		if (home == nullptr) { home = new Home; }
		return home;
	}
};