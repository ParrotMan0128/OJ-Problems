#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {

	int inputs[2];
	char c;

	int sum = 0;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d %c %d", &inputs[0], &c, &inputs[1]);

	switch (c) {

	case '+':

		sum = inputs[0] + inputs[1];
		break;

	case '-':

		sum = inputs[0] - inputs[1];
		break;

	case '*':

		sum = inputs[0] * inputs[1];
		break;

	case '/':

		sum = inputs[0] / inputs[1];
		break;

	default:

		break;

	}

	printf("%d\n", sum);

	return 0;

}