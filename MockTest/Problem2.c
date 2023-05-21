#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {

	int input;
	printf("정수: ");
	scanf("%d", &input);

	int a = input / 10000; // 만의 자리 추출
	input = input % 10000;
	int b = input / 1000; // 천의 자리 추출 
	input = input % 1000;
	int c = input / 100; // 백의 자리 추출
	input = input % 100;
	int d = input / 10; // 십의 자리 추출
	input = input % 10;
	int e = input; // 일의 자리 추출

	printf("정수(역순): %d %d %d %d %d", e, d, c, b, a);

	return 0;

}