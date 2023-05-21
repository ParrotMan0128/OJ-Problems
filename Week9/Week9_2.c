#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define SIZE 5

void setArrayValue(int* array, int size);
void printReversedArray(int* array, int size);

int main() {

	int array[SIZE];
	setArrayValue(array, SIZE);
	printReversedArray(array, SIZE);

	return 0;

}

void setArrayValue(int* array, int size) {

	printf("5개의 정수를 입력하시오:");

	for (int i = 0; i < size; i++) {

		scanf("%d", (array + i));

	}

}

void printReversedArray(int* array, int size) {

	printf("역순: ");

	for (int i = size - 1; i >= 0; i--) {

		printf("%d ", *(array + i));

	}

}