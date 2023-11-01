#include "Kamata.h"

Kamata::Kamata(const char* name) {
	name_ = name;
}

void Kamata::Name() {
	cout << name_ << endl;
}