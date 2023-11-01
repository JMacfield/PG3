#include "Hachioji.h"

Hachioji::Hachioji(const char* name) {
	name_ = name;
}

void Hachioji::Name() {
	cout << name_ << endl;
}