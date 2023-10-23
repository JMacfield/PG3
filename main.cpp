#include <iostream>

uint32_t CalculateRecursivePayment(uint32_t payment, uint32_t hour) {
	if (hour <= 0) {
		return payment;
	}

	return payment + CalculateRecursivePayment(payment * 2 - 50, hour - 1);
}

uint32_t Calculate