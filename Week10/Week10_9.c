﻿#include <stdio.h>
#include <string.h>
#include <math.h>

int checkPalindrome(char* string);

int main() {

	char string[32];

	printf("문자열을 입력하시오: ");

	gets(string);

	if (checkPalindrome(string) == 1) {

		printf("%s는 회문입니다.", string);

	}
	else {

		printf("%s는 회문이 아닙니다.", string);

	}

	return 0;

}

int checkPalindrome(char* string) {

	int length = strlen(string);

	for (int i = 0; i < length / 2; i++) {

		if (string[i] != string[length - 1 - i]) {

			return 0;

		}

	}

	return 1;

}