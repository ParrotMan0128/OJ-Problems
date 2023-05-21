#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {

	double x, y;
	int result;

	printf("2개의 실수를 입력하시오: ");
	scanf("%lf %lf", &x, &y);

	result = (int)x + (int)y;

	printf("합의 정수부 = %d", result);

	return 0;

}