#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void save(int* total, int amount);

int main() {

	int total = 0;
	int amount;

	while (1) {

		printf("�󸶸� �����Ͻðڽ��ϱ�?(����� -1): ");
		scanf("%d", &amount);

		if (amount == -1) { break; }

		save(&total, amount);
		printf("���ݱ����� ������� %d�Դϴ�.\n", total);

	}

	return 0;

}

void save(int* total, int amount) {

	*total += amount;

}