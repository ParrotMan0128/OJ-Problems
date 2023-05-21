#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {

	int x, y;
	int sum = 0;

	printf("시작정수: ");
	scanf("%d", &x);

	printf("종료정수: ");
	scanf("%d", &y);

	for (int i = x; i <= y; i++) {

		sum = sum + i;

	}

	printf("%d에서 %d까지의 합 = %d", x, y, sum);


	return 0;

}