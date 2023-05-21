#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {

	//Code Here

	int n = 0;
	int cycle = 0;
	scanf("%d", &n);

	do {

		if (n % 2 == 1) {

			n = (2 * n) - 2;
			printf("%d ", n);

		}
		else {

			n = n / 2;
			printf("%d ", n);

		}

		cycle++;

	} while (n > 0);

	printf("\ncycle : %d", cycle);

	return 0;

}