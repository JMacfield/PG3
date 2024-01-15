#include <iostream>
#include <thread>
#include <Windows.h>

void Quadruple(int number) {
	number *= 4;
	std::cout << "thread 1 : " << number << std::endl;
}

void AddFour(int number) {
	number += 4;
	std::cout << "thread 2 : " << number << std::endl;
}

void SubtractFour(int number) {
	number -= 4;
	std::cout << "thread 3 : " << number << std::endl;
}

int main(void) {
	SetConsoleOutputCP(65001);

	int number = 4;

	std::thread th1(Quadruple, number);
	th1.join();

	std::thread th2(AddFour, number);
	th2.join();

	std::thread th3(SubtractFour, number);
	th3.join();

	return 0;
}