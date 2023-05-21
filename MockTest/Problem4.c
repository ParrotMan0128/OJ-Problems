#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {

	char drink;

	printf("문자: ");
	scanf("%c", &drink);

	if (drink == 'f' || drink == 'F') {

		printf("환타");

	}
	else if (drink == 'c' || drink == 'C') {

		printf("콜라");

	}
	else if (drink == 'p' || drink == 'P') {

		printf("포카리스웨트");

	}
	else {

		printf("판매하지 않는 음료수");

	}

	return 0;

}