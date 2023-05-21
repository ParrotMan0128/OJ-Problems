#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {

	int input;

	printf("정수를 입력하시오: ");

	scanf("%d", &input);

	if (input % 2 == 0) {

		printf("%d 은 짝수 입니다.\n", input);

	}
	else {

		printf("%d 은 홀수 입니다.\n", input);

	}

	return 0;
	
}