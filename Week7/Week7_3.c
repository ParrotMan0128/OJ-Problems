#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int n;
	int sum = 0;
	int* numbers;

	printf("�Է��� ������ ����:");
	scanf("%d", &n);

	numbers = (int*)malloc(sizeof(int) * n);

	if (numbers != NULL) {

		for (int i = 0; i < n; i++) {

			printf("%d��° ��Ҹ� �Է��Ͻÿ�:", i);
			scanf("%d", &numbers[i]);

			sum += numbers[i];

		}

		printf("��=%d", sum);

	}

	free(numbers);

	return 0;

}