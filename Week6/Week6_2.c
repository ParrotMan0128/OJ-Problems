#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {

	int loopNum;

	printf("몇 번이나 반복할까요?: ");
	scanf("%d", &loopNum);

	for (int i = 0; i < loopNum; i++) {

		printf("안녕하세요?\n");

	}

	return 0;

}