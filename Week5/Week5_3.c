#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {

	int input;

	printf("������ 0(�Ͽ���)���� 6������ ������ �Է��Ͻÿ�:");
	scanf("%d", &input);

	if (input == 0 || input == 6) {

		printf("�ָ��Դϴ�.\n");

	}
	else {

		printf("�����Դϴ�.\n");

	}

	return 0;

}