#include "Rectangle.h"

void Rectangle::Size() {
	size_ = height_ * width_;
}

void Rectangle::Draw() {
	cout << size_ << endl;
}