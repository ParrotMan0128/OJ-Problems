#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

double getBigger(double x, double y);

int main(void) {

	//code here
	double x, y;
	printf("�Ǽ��� �Է��Ͻÿ�: ");
	scanf("%lf", &x);
	printf("�Ǽ��� �Է��Ͻÿ�: ");
	scanf("%lf", &y);

	printf("�� ū���� %lf�Դϴ�.", getBigger(x, y));

	return 0;

}

double getBigger(double x, double y) {

	double result = x > y ? x : y;

	return result;

}