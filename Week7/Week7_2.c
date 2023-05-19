#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {

	int n;
	int numbers[100];

	printf("입력할 정수의 개수:");
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {

		printf("%d번째 요소를 입력하시오:", i);
		scanf("%d", &numbers[i]);

	}

	for (int i = n - 1; i >= 0; i--) {

		printf("%d ", numbers[i]);

	}

	return 0;

}