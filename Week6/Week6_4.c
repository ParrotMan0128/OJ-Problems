#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {

	int input;
	int sum = 0;

	while (1) {

		printf("정수를 입력하시오: ");
		scanf("%d", &input);

		if (input == 0) {

			break;

		}

		sum = sum + input;

	}

	printf("합계=%d", sum);

	return 0;

}