#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {

	double x;
	double result;

	printf("x�� ���� �Է��Ͻÿ�: ");
	scanf("%lf", &x);

	result = (x * x * x - 20) / (x - 7);

	printf("������ ���� %lf�Դϴ�.", result);

	return 0;

}