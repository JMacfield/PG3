#include "Circle.h"

void Circle::Size() {
	size_ = radius_ * radius_ * 3.14f;
}

void Circle::Draw() {
	cout << size_ << endl;
}