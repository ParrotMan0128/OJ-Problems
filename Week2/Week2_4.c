#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {

	int age = 0;

	printf("나이를 입력하시오: ");
	scanf("%d", &age);

	printf("내년이면 %d살이 되시는군요.", (age + 1));

	return 0;

}