#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {

	int inputs[2] = { 0, 0 };

	for (int i = 0; i < 2; i++) {

		printf("정수를 입력하시오:");
		scanf("%d", &inputs[i]);

	}

	printf("두수의 합은 %d입니다.\n", inputs[0] + inputs[1]);

	if (inputs[0] > inputs[1]) {

		printf("두수의 차는 %d입니다.\n", inputs[0] - inputs[1]);

	}
	else {

		printf("두수의 차는 %d입니다.\n", inputs[1] - inputs[0]);

	}

	return 0;

}