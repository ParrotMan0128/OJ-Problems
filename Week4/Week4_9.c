#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {

	int input;

	printf("���ڸ� �Է��Ͻÿ�: ");
	scanf("%d", &input);

	printf("LSB�� %d\n", (input & 0x01));


	return 0;

}