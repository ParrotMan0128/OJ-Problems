#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main() {

	int n;
	int* numbers;

	printf("�Է��� ������ ����:");
	scanf("%d", &n);

	numbers = (int*)malloc(sizeof(int) * n);

	if (numbers != NULL) {

		for (int i = 0; i < n; i++) {

			printf("%d���� ��Ҹ� �Է��Ͻÿ�:", i);
			scanf("%d", &numbers[i]);

		}

		for (int i = n - 1; i >= 0; i--) {

			printf("%d ", numbers[i]);

		}

	}

	free(numbers);

	return 0;

}