#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int power(int n, int m);

int main() {

	//code here
	for (int i = 0; i <= 10; i++) {

		printf("%d ", power(3, i));

	}

	return 0;

}

int power(int n, int m) {

	int result = 1;

	for (int i = 0; i < m; i++) {

		result *= n;

	}

	return result;

}