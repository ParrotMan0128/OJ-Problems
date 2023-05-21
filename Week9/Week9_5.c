#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>;

#define HEIGHT 10
#define WIDTH 10

void brighten_image(int* p, int n);

int main() {

	int image[HEIGHT * WIDTH] =
	{ 0,0,0,0,9,0,0,0,0,0,
	0,0,0,9,9,0,0,0,0,0,
	0,0,9,0,9,0,0,0,0,0,
	0,0,0,0,8,0,0,0,0,0,
	0,0,0,0,9,0,0,0,0,0,
	0,0,0,0,7,0,0,0,0,0,
	0,0,0,0,8,0,0,0,0,0,
	0,0,0,0,9,0,0,0,0,0,
	0,0,0,0,9,0,0,0,0,0,
	0,0,6,6,9,7,7,0,0,0 };

	brighten_image(&image, HEIGHT * WIDTH);

	for (int i = 1; i <= HEIGHT * WIDTH; i++) {

		printf("%d ", image[i - 1]);

		if (i % WIDTH == 0) {

			printf("\n");

		}

	}

	return 0;

}

void brighten_image(int* p, int n) {

	for (int i = 0; i < n; i++) {

		if (*(p + i) > 0) {

			*(p + i) -= 1;

		}
	}
}
