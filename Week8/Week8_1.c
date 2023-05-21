#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

float f(int x, int y);

int main(void) {

	//code here
	for (int i = 0; i < 3; i++) {

		for (int j = 0; j < 3; j++) {

			printf("x=%f, y=%f, f(x,y)=%f\n", (float)i, (float)j, f(i, j));

		}
	}

	return 0;

}

float f(int x, int y) {

	float result = 1.5 * x + 3.0 * y;

	return result;

}