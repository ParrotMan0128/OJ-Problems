#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {

	double input = 0.0f;

	printf("x�� ���� �Է��Ͻÿ�: ");
	scanf("%lf", &input);

	double result = 3.0 * input * input * input - 7.0 * input * input + 9.0;

	printf("���׽��� ���� %lf�Դϴ�.", result);

	return 0;

}