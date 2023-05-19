#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {

	int x, y;

	int matA[100][100];

	int matB[100][100];

	printf("행 개수=");
	scanf("%d", &x);
	printf("열 개수=");
	scanf("%d", &y);

	printf("행렬 입력=\n");
	for (int i = 0; i < x; i++) {

		for (int j = 0; j < y; j++) {

			scanf("%d", &matA[i][j]);

		}

	}

	for (int i = 0; i < x; i++) {

		for (int j = 0; j < y; j++) {

			matB[j][i] = matA[i][j];

		}

	}

	for (int i = 0; i < y; i++) {

		for (int j = 0; j < x; j++) {

			printf("%d ", matB[i][j]);

		}

		printf("\n");

	}

	return 0;

}