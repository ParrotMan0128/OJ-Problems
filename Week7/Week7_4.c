#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define SIZE 5

int main(void) {

	int numbers[SIZE];

	int max, min;

	for (int i = 0; i < SIZE; i++) {

		printf("������ �Է��Ͻÿ�: ");
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

	printf("�ִ밪=%d �ּҰ�=%d", max, min);

	return 0;

}