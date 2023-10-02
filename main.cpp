#include <stdio.h>

template<typename Type1, typename Type2>

Type1 Min(Type1 a, Type2 b) {
	if (static_cast<Type1>(a) <= static_cast<Type2>(b)) {
		return static_cast<Type1>(a);
	}
	else {
		return static_cast<Type1>(b);
	}
}

template <>
char Min<char>(char a, char b) {
	printf("数字以外は代入できません\n");

	return NULL;
}

int main(void) {
	printf("%d\n", Min<int, int>(12, 4));
	printf("%f\n", Min<float, float>(8.0f, 30.0f));
	printf("%lf\n", Min<double, double>(5.0000, 13.0000));
	printf("%d\n", Min<char, char>(1, 10));

	return 0;
}