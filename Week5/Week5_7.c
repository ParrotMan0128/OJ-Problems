#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {

	int sides[3];

	printf("삼각형의 세변을 입력하시요: ");
	scanf("%d %d %d", &sides[0], &sides[1], &sides[2]);

	if (sides[0] == sides[1] && sides[0] == sides[2]) {

		printf("정삼각형\n");

	}
	else if (sides[0] == sides[1] || sides[1] == sides[2] || sides[2] == sides[0]) {

		printf("이등변 삼각형\n");

	}

	return 0;

}