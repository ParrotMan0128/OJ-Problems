#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {

	int x, y;
	int quotient;
	int remainder;

	printf("첫 번째 정수를 입력하시오: ");
	scanf("%d", &x);

	printf("두 번째 정수를 입력하시오: ");
	scanf("%d", &y);

	quotient = x / y;
	remainder = x % y;

	printf("몫은 %d이고 나머지는 %d입니다.", quotient, remainder);

	return 0;

}