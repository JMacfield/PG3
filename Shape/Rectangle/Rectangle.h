#pragma once

#include "Shape/IShape.h"

class Rectangle : public IShape {
public:
	Rectangle(float width, float height) { width_ = width, height_ = height; }

	void Size() override;
	void Draw() override;

private:
	float size_;
	float width_;
	float height_;
};