#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {

	int input;
	int hun, ten, one;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &input);

	hun = input / 100;
	input = input % 100;

	ten = input / 10;
	input = input % 10;

	one = input;

	printf("���� �ڸ� ��: %d\n", hun);
	printf("���� �ڸ� ��: %d\n", ten);
	printf("���� �ڸ� ��: %d\n", one);

	return 0;

}