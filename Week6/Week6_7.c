#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {

	int x, y;
	int sum = 0;

	printf("��������: ");
	scanf("%d", &x);

	printf("��������: ");
	scanf("%d", &y);

	for (int i = x; i <= y; i++) {

		sum = sum + i;

	}

	printf("%d���� %d������ �� = %d", x, y, sum);


	return 0;

}