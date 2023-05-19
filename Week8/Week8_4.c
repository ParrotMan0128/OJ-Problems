#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void getDivisor(int value);

int main() {

	//code here
	int n;
	scanf("%d", &n);
	getDivisor(n);

	return 0;

}


void getDivisor(int value) {

	printf("%dÀÇ ¾à¼ö:", value);

	for (int i = 1; i <= value; i++) {

		if (value % i == 0) {

			printf(" %d", i);

		}

	}

}