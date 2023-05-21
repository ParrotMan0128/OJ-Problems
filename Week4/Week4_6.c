#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {

	int input;
	int hun, ten, one;

	printf("정수를 입력하시오: ");
	scanf("%d", &input);

	hun = input / 100;
	input = input % 100;

	ten = input / 10;
	input = input % 10;

	one = input;

	printf("백의 자리 수: %d\n", hun);
	printf("십의 자리 수: %d\n", ten);
	printf("일의 자리 수: %d\n", one);

	return 0;

}