#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {

	char input;

	printf("신호등의 색깔 입력 (R, G, Y): ");
	scanf("%c", &input);

	if (input == 'r') {

		printf("정지!\n");

	}
	else if (input == 'g') {

		printf("진행!\n");

	}
	else if (input == 'y') {

		printf("주의!\n");

	}

	return 0;

}