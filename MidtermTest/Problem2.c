#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

int main(void) {

	//Code Here
	double input;

	scanf("%lf", &input);

	double s = pow(input, 2);
	double v = pow(input, 3);

	printf("力蚌: %le\n", s);
	printf("技力蚌: % le\n", v);
	printf("\n");
	printf("力蚌: %12.3lf\n", s);
	printf("技力蚌: %-12.3lf\n", v);
	printf("力蚌+技力蚌: %010d", (int)s + (int)v);

	return 0;

}