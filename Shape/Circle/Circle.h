#pragma once

#include "Shape/IShape.h"

class Circle : public IShape {
public:
	Circle(float radius) { radius_ = radius; }
	
	void Size() override;
	void Draw() override;

private:
	float size_;
	float radius_;
};