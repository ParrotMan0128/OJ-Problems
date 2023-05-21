#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

	srand(time(NULL));

	int check[10] = { 0,0,0,0,0,0,0,0,0,0 };

	int max;
	int index = 0;

	for (int i = 0; i < 100; i++) {

		check[rand() % 10]++;

	}

	max = check[0];

	for (int i = 1; i < 10; i++) {

		if (check[i] > max) {

			max = check[i];
			index = i;

		}

	}

	printf("가장 많이 생성된 수=%d", index);

	return 0;

}