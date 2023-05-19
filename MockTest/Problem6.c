#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {

	int starCount;
	int changeLine;

	printf("몇 개의 *를 표시할까요: ");
	scanf("%d", &starCount);

	printf("몇 개마다 줄 바꿈할까요: ");
	scanf("%d", &changeLine);

	// starCount개의 별 출력
	for (int i = 1; i <= starCount; i++) {

		printf("*");

		// 별이 changeLine개만큼 출력 될 때마다 줄바꿈
		if (i % changeLine == 0) {

			printf("\n");

		}

	}

	return 0;

}