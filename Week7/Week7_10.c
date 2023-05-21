#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {

	int n;
	int num;
	int freq[100] = { 0, };

	printf("입력할 정수의 개수(10개 이내로):");
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {

		printf("%d번째 요소를 입력하시오:", i);
		scanf("%d", &num);

		freq[num]++;
	}

	for (int i = 0; i < 100; i++) {

		if (freq[i] > 0) {

			printf("%d 값은 %d 번 등장\n", i, freq[i]);

		}

	}

	return 0;

}