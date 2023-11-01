#include "Enemy.h"

int main(void) {
	Enemy* enemy = new Enemy();
	enemy->Update();

	delete enemy;

	return 0;
}