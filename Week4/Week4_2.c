#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {

	int x, y, z;
	int result;

	printf("정수를 3개 입력하시오: ");

	scanf("%d %d %d", &x, &y, &z);

	result = x * y - z;

	printf("%d * %d - %d = %d", x, y, z, result);

	return 0;

}