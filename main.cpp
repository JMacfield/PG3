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

void TimeSet(pFunction function,int second, int diceResult, int playerChoice) {
	Sleep(second * 1000);
	function(diceResult, playerChoice);
}

void Result(int diceResult, int playerChoice) {
	cout << "�T�C�R���̏o�ڂ�" << diceResult << "��";
	cout << (diceResult % 2 == 0 ? "����" : "�") << "�ł�" << endl;

	if ((diceResult % 2 == 0 && playerChoice == 2) || (diceResult % 2 == 1 && playerChoice == 1)) {
		cout << "������" << endl;
	}
	else {
		cout << "�O��" << endl;
	}
}

int PlayerChoice() {
	int playerChoice = 0;

	while (playerChoice != 1 && playerChoice != 2) {
		cout << "���������I������Enter�������Ă�������" << std::endl;
		cout << "1 : �, 2 : ����" << endl;
		cin >> playerChoice;
	}

	return playerChoice;
}

int main(void) {
	int playerChoice = PlayerChoice();
	int diceResult = DiceRoll();

	pFunction result = Result;
	TimeSet(result, 3, diceResult, playerChoice);

	return 0;
}