#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {

	double input = 0.0f;

	printf("x의 값을 입력하시오: ");
	scanf("%lf", &input);

	double result = 3.0 * input * input * input - 7.0 * input * input + 9.0;

	printf("다항식의 값은 %lf입니다.", result);

	return 0;

}