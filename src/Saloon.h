#include "State.h"

class Saloon :public State {
private:
	static Saloon *saloon;
	Saloon();
public:
	void Enter();
	void Update();
	void Exit();

	static Saloon *Instance()
	{
		if (saloon == nullptr) { saloon = new Saloon; }
		return saloon;
	}
};