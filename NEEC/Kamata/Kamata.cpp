#include "Kamata.h"

Kamata::Kamata(const char* name) {
	name_ = name;
}

void Kamata::DisplayName() {
	cout << name_ << endl;
}