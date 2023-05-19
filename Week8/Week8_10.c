#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void save(int* total, int amount);

int main() {

	int total = 0;
	int amount;

	while (1) {

		printf("얼마를 저축하시겠습니까?(종료는 -1): ");
		scanf("%d", &amount);

		if (amount == -1) { break; }

		save(&total, amount);
		printf("지금까지의 저축액은 %d입니다.\n", total);

	}

	return 0;

}

void save(int* total, int amount) {

	*total += amount;

}