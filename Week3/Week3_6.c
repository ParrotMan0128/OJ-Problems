#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {

	char input_A = 'a';
	char input_B = 'a';
	char input_C = 'a';

	printf("문자를 입력하시오: ");
	scanf("%c %c %c", &input_A, &input_B, &input_C);

	printf("문자: %c %c %c", input_C, input_B, input_A);

	return 0;

}