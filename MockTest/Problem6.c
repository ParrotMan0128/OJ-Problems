#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {

	int starCount;
	int changeLine;

	printf("�� ���� *�� ǥ���ұ��: ");
	scanf("%d", &starCount);

	printf("�� ������ �� �ٲ��ұ��: ");
	scanf("%d", &changeLine);

	// starCount���� �� ���
	for (int i = 1; i <= starCount; i++) {

		printf("*");

		// ���� changeLine����ŭ ��� �� ������ �ٹٲ�
		if (i % changeLine == 0) {

			printf("\n");

		}

	}

	return 0;

}