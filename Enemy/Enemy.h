#pragma once

#include <iostream>
#include <Windows.h>

using namespace std;

class Enemy {
public:
	enum class State {
		kApproach,
		kFire,
		kLeave,
	};

public:
	void Update();
	void BehaviorChange();

private:
	void Approach();
	void Fire();
	void Leave();

	static void (Enemy::* statePatternTable[])();

	int switchKey_ = 1;
};