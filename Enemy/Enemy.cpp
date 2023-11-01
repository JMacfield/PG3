#include "Enemy.h"

void (Enemy::* Enemy::statePatternTable[])() = {
	&Enemy::Approach,
	&Enemy::Fire,
	&Enemy::Leave
};

void Enemy::Update() {
	while (switchKey_ <= 4) {
		switch (switchKey_ - 1) {
		case static_cast<size_t>(Enemy::State::kApproach):
			(this->*statePatternTable[static_cast<size_t>(State::kApproach)])();
			break;

		case static_cast<size_t>(Enemy::State::kFire):
			(this->*statePatternTable[static_cast<size_t>(State::kFire)])();
			break;

		case static_cast<size_t>(Enemy::State::kLeave):
			(this->*statePatternTable[static_cast<size_t>(State::kLeave)])();
			break;
		}
	}
}

void Enemy::BehaviorChange() {
	Sleep(1000);
	cout << "行動変更" << endl;
	Sleep(1000);
	switchKey_ += 1;

	if (switchKey_ == 3) {
		switchKey_ = 0;
	}
}

void Enemy::Approach() {
	cout << "接近" << endl;
	BehaviorChange();
}

void Enemy::Fire() {
	cout << "射撃" << endl;
	BehaviorChange();
}

void Enemy::Leave() {
	cout << "離脱" << endl;
	BehaviorChange();
}