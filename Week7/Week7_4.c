#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define SIZE 5

int main(void) {

	int numbers[SIZE];

	int max, min;

	for (int i = 0; i < SIZE; i++) {

		printf("정수를 입력하시오: ");
		scanf("%d", &numbers[i]);

	}

	max = min = numbers[0];

	for (int i = 1; i < SIZE; i++) {

		if (max < numbers[i]) {

			max = numbers[i];

		}

		if (min > numbers[i]) {

			min = numbers[i];

		}

	}

	printf("최대값=%d 최소값=%d", max, min);

	return 0;

}