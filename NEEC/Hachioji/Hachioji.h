#pragma once

#include "NEEC.h"

class Hachioji : public NEEC {
public:
	Hachioji(const char* name);
	void DisplayName() override;
};