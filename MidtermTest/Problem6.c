#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

int main(void) {

	//Code Here
	long long int a;
	int b;

	scanf("%lld %d", &a, &b);

	printf("%lld.", a / (long long int)pow(10, b));
	printf("%lld", a % (long long int)pow(10, b));

	return 0;

}