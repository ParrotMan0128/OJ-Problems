#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {

	double x, y;
	int result;

	printf("2���� �Ǽ��� �Է��Ͻÿ�: ");
	scanf("%lf %lf", &x, &y);

	result = (int)x + (int)y;

	printf("���� ������ = %d", result);

	return 0;

}