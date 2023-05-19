#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {

	double Cdeg;

	printf("======================\n");
	printf("È­¾¾¿Âµµ      ¼·¾¾¿Âµµ\n");
	printf("======================\n");

	for (int i = 0; i <= 100; i = i + 10) {

		Cdeg = (i - 32) * (5.0 / 9.0);

		printf("%d               %d\n", i, (int)Cdeg);

	}

	return 0;

}