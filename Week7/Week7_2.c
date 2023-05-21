#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main() {

	int n;
	int* numbers;

	printf("입력할 정수의 개수:");
	scanf("%d", &n);

	numbers = (int*)malloc(sizeof(int) * n);

	if (numbers != NULL) {

		for (int i = 0; i < n; i++) {

			printf("%d번쨰 요소를 입력하시오:", i);
			scanf("%d", &numbers[i]);

		}

		for (int i = n - 1; i >= 0; i--) {

			printf("%d ", numbers[i]);

		}

	}

	free(numbers);

	return 0;

}