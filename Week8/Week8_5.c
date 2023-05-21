#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int checkPrime(int n);

int main() {

	//code here
	for (int i = 2; i <= 100; i++) {

		if (checkPrime(i)) {

			printf("%d ", i);

		}

	}

	return 0;

}

int checkPrime(int n) {

	for (int i = 2; i < n; i++) {

		if (n % i == 0) {

			return 0;

		}

	}

	return 1;

}