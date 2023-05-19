#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {

	double height;

	printf("키: ");
	scanf("%lf", &height);

	// 소수 첫 째 자리까지 출력
	printf("표준체중은 %.1lf 입니다.", (height - 100) * 0.9);

	return 0;

}