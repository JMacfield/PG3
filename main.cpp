#include <functional>
#include <iostream>
#include <stdio.h>
#include <random>
#include <Windows.h>

using namespace std;

void SetTimeOut(std::function<void()> function, int second) {
	Sleep(second * 1000);
	function();
}

int PlayerChoice() {
	int playerChoice = 0;

	while (playerChoice != 1 && playerChoice != 2) {
		cout << "奇数か偶数を選択してEnterを押してください" << std::endl;
		cout << "1 : 奇数, 2 : 偶数" << endl;
		cin >> playerChoice;
	}

	return playerChoice;
}

int main(void) {
	std::random_device rd;
	std::mt19937 mt(rd());

	int playerChoice = PlayerChoice();

	std::function<int()>diceRoll = [&mt]() {
		std::cout << "さいころの出目は " << diceResult;
		std::cout << " で";
		std::cout << (diceResult % 2 == 0 ? "偶数" : "奇数");
		std::cout << " です。" << std::endl;
		};

	SetTimeOut(result, 3);

	return 0;
}
