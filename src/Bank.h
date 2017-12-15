#include "State.h"

class Bank:public State {
private:
	static Bank*bank;
	Bank();
public:
	void Enter();
	void Update();
	void Exit();

	static Bank*Instance()
	{
		if (bank == nullptr) { bank = new Bank; }
		return bank;
	}
};