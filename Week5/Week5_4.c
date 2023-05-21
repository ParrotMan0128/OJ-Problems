#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {

	char input;

	printf("문자를 입력하시오:");
	scanf("%c", &input);

	if (((int)input >= 65 && (int)input <= 90) || ((int)input >= 97 && (int)input <= 122)) {

		printf("알파벳입니다.");

	}
	else if ((int)input >= 48 && (int)input <= 57) {

		printf("숫자입니다.\n");

	}
	else {

		printf("특수문자입니다.\n");

	}

	return 0;

}