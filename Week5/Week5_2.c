#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {

	int inputs[2] = { 0, 0 };

	for (int i = 0; i < 2; i++) {

		printf("������ �Է��Ͻÿ�:");
		scanf("%d", &inputs[i]);

	}

	printf("�μ��� ���� %d�Դϴ�.\n", inputs[0] + inputs[1]);

	if (inputs[0] > inputs[1]) {

		printf("�μ��� ���� %d�Դϴ�.\n", inputs[0] - inputs[1]);

	}
	else {

		printf("�μ��� ���� %d�Դϴ�.\n", inputs[1] - inputs[0]);

	}

	return 0;

}