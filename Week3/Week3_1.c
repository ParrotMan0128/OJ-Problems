#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {

	double input = 0.0;

	printf("실수를 입력하시오: ");
	scanf("%lf", &input);

	printf("지수 형식으로는 %e입니다.", input);

	return 0;

}