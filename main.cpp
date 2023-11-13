#include "Kamata.h"
#include "Hachioji.h"

int main(void) {
	const size_t kCount = 2;
	NEEC* neec[kCount];

	neec[0] = new Kamata("Kamata Campus");
	neec[1] = new Hachioji("Hachioji Campus");

	for (size_t i = 0; i < kCount; i++) {
		neec[i]->DisplayName();
	}

	for (size_t i = 0; i < kCount; i++) {
		delete neec[i];
	}

	return 0;
}