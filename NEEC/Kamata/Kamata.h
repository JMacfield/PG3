#pragma once

#include "NEEC.h"

class Kamata : public NEEC {
public:
	Kamata(const char* name);
	void DisplayName() override;
};