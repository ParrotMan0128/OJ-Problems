#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {

	int angle_A = 0;
	int angle_B = 0;
	int angle_C = 0;

	printf("삼각형의 내각 2개: ");
	scanf("%d %d", &angle_A, &angle_B);

	angle_C = 180 - angle_A - angle_B;

	printf("세번째 각은 %d 입니다.", angle_C);

	return 0;

}