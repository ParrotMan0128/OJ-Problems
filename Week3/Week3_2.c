#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {

	double input = 0.0;

	printf("지수를 입력하시오: ");
	scanf("%le", &input);

	printf("소수점 표시 형식으로는 %lf입니다.", input);

	return 0;

}
