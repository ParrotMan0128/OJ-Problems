#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {

	double x;
	double result;

	printf("x의 값을 입력하시오: ");
	scanf("%lf", &x);

	result = (x * x * x - 20) / (x - 7);

	printf("수식의 값은 %lf입니다.", result);

	return 0;

}