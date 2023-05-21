#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {

	char input;

	printf("문자를 입력하시오:");
	scanf("%c", &input);

	if (((int)input >= 65 && (int)input <= 90)) {

		printf("대문자입니다.\n");

	}
	else if (((int)input >= 97 && (int)input <= 122)) {

		printf("소문자입니다.\n");

	}

	return 0;

}