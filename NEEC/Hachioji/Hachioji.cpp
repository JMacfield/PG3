#include "Hachioji.h"

Hachioji::Hachioji(const char* name) {
	name_ = name;
}

void Hachioji::DisplayName() {
	cout << name_ << endl;
}