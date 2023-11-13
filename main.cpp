#include "Shape/Circle/Circle.h"
#include "Shape/Rectangle/Rectangle.h"

int main(void) {
	const size_t kShape = 2;
	IShape* shape[kShape];

	shape[0] = new Circle(8.0f);
	shape[1] = new Rectangle(4.0f, 11.0f);

	for (size_t i = 0; i < kShape; i++) {
		shape[i]->Size();
		shape[i]->Draw();
	}

	for (size_t i = 0; i < kShape; i++) {
		delete shape[i];
	}

	return 0;
}