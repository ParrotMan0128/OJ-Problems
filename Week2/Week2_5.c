#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {

	int input_a = 0;
	int input_b = 0;
	int input_c = 0;

	printf("정수를 입력하시오 : ");
	scanf("%d", &input_a);

	printf("정수를 입력하시오 : ");
	scanf("%d", &input_b);

	printf("정수를 입력하시오 : ");
	scanf("%d", &input_c);

	float avg = (input_a + input_b + input_c) / 3.0;

	printf("평균은 %f입니다.", avg);

	return 0;

}