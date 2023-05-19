#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {

	for (int i = 1; i < 8; i++) {

		for (int j = 1; j <= i; j++) {

			printf("%d", j);

		}

		for (int j = 1; j < 8 - i; j++) {

			printf("*");

		}

		printf("\n");

	}

	return 0;

}