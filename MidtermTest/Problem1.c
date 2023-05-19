#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {

	//Code Here
	double second;

	scanf("%lf", &second);

	double distance = 0.5 * 9.8 * second * second;

	printf("%.2lf", distance);

	return 0;

}