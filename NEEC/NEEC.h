#pragma once

#include <iostream>

using namespace std;

class NEEC {
public:
	virtual void DisplayName();

protected:
	const char* name_;
};