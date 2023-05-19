#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {

	int input;

	printf("요일은 0(일요일)에서 6까지의 정수로 입력하시오:");
	scanf("%d", &input);

	if (input == 0 || input == 6) {

		printf("주말입니다.\n");

	}
	else {

		printf("주중입니다.\n");

	}

	return 0;

}