#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {

	int input;

	printf("������ �Է��Ͻÿ�: ");

	scanf("%d", &input);

	if (input % 2 == 0) {

		printf("%d �� ¦�� �Դϴ�.\n", input);

	}
	else {

		printf("%d �� Ȧ�� �Դϴ�.\n", input);

	}

	return 0;
	
}