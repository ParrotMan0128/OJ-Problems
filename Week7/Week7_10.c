#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {

	int n;
	int num;
	int freq[100] = { 0, };

	printf("�Է��� ������ ����(10�� �̳���):");
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {

		printf("%d��° ��Ҹ� �Է��Ͻÿ�:", i);
		scanf("%d", &num);

		freq[num]++;
	}

	for (int i = 0; i < 100; i++) {

		if (freq[i] > 0) {

			printf("%d ���� %d �� ����\n", i, freq[i]);

		}

	}

	return 0;

}