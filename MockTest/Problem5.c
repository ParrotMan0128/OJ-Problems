#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {

	int money;

	printf("교통카드 금액: ");
	scanf("%d", &money);

	while (1) {

		money = money - 1200;

		if (money < 0) {

			break;

		}

		printf("%d\n", money);

	}

	return 0;

}