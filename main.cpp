#include <functional>
#include <iostream>
#include <stdio.h>
#include <random>
#include <windows.h>

void SetTime(std::function<void()> function, int second) {
	Sleep(second * 1000);
	function();
}

int GetUserGuess() {
	int userGuess = 0;

	while (userGuess != 1 && userGuess != 2) {
		std::cout << "奇数か偶数か選択しEnterを押してください" << std::endl;
		std::cout << "1 : 奇数, 2 : 偶数" << std::endl;
		std::cin >> userGuess;
	}
	return userGuess;
}

int main(void) {
	std::random_device rd;
	std::mt19937 mt(rd());

	int userGuess = GetUserGuess();
	
	std::function<int()> diceRoll = [&mt]() {
		return mt() % 6 + 1;
		};

	int diceResult = diceRoll();

	std::function<void()> result = [&]() {
		std::cout << "さいころの出目は " << diceResult;
		std::cout << " で";
		std::cout << (diceResult % 2 == 0 ? "偶数" : "奇数");
		std::cout << " です。" << std::endl;

		if ((diceResult % 2 == 0 && userGuess == 2) || (diceResult % 2 == 1 && userGuess == 1)) {
			std::cout << "当たり！" << std::endl;
		}
		else {
			std::cout << "はずれ..." << std::endl;
		}
		};

	SetTime(result, 3);

	return 0;
}