#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {

	int days[] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	for (int i = 1; i <= 12; i++) {

		printf("%d���� %d�ϱ��� �ֽ��ϴ�.\n", i, days[i - 1]);

	}

	return 0;

}