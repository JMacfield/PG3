#include <iostream>
#include <stdio.h>
#include <random>
#include <Windows.h>

using namespace std;

std::random_device rd;
std::mt19937 mt(rd());

int DiceRoll() {
	return mt() % 6 + 1;
}

typedef void (*pFunction)(int a, int b);

void TimeSet(pFunction function,int second, int diceResult, int playerGuess) {
	Sleep(second * 1000);
	function(diceResult, playerGuess);
}

void Result(int diceResult, int playerGuess) {
	cout << "サイコロの出目は" << diceResult << "で";
	cout << (diceResult % 2 == 0 ? "偶数" : "奇数") << "です" << endl;

	if ((diceResult % 2 == 0 && playerGuess == 2) || (diceResult % 2 == 1 && playerGuess == 1)) {
		cout << "当たり" << endl;
	}
	else {
		cout << "外れ" << endl;
	}
}

int PlayerGuess() {
	int playerGuess = 0;

	while (playerGuess != 1 && playerGuess != 2) {
		cout << "奇数か偶数を選択してEnterを押してください" << std::endl;
		cout << "1 : 奇数, 2 : 偶数" << endl;
		cin >> playerGuess;
	}

	return playerGuess;
}

int main(void) {
	int playerGuess = PlayerGuess();
	int diceResult = DiceRoll();

	pFunction result = Result;
	TimeSet(result, 3, diceResult, playerGuess);

	return 0;
}