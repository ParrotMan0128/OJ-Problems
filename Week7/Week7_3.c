#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {

	int n;
	int sum = 0;
	int numbers[100];

	printf("�Է��� ������ ����:");
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {

		printf("%d��° ��Ҹ� �Է��Ͻÿ�:", i);
		scanf("%d", &numbers[i]);

		sum += numbers[i];

	}

	printf("��=%d", sum);

	return 0;

}