#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {

	int input;
	printf("����: ");
	scanf("%d", &input);

	int a = input / 10000; // ���� �ڸ� ����
	input = input % 10000;
	int b = input / 1000; // õ�� �ڸ� ���� 
	input = input % 1000;
	int c = input / 100; // ���� �ڸ� ����
	input = input % 100;
	int d = input / 10; // ���� �ڸ� ����
	input = input % 10;
	int e = input; // ���� �ڸ� ����

	printf("����(����): %d %d %d %d %d", e, d, c, b, a);

	return 0;

}