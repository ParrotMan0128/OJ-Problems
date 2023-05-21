#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {

	int num, n;
	int newNum;

	printf("숫자를 입력하시오: ");
	scanf("%d", &num);

	printf("n을 입력하시오: ");
	scanf("%d", &n);

	n = 0x01 << n;
	newNum = num | n;

	printf("새로운 값= %d", newNum);

	return 0;

}

