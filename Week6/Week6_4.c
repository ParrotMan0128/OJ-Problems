#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {

	int input;
	int sum = 0;

	while (1) {

		printf("������ �Է��Ͻÿ�: ");
		scanf("%d", &input);

		if (input == 0) {

			break;

		}

		sum = sum + input;

	}

	printf("�հ�=%d", sum);

	return 0;

}