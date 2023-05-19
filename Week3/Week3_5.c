#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {

	char input = 'a';

	printf("문자를 입력하시오: ");
	scanf("%c", &input);

	printf("아스키코드: %d", input);

	return 0;

}