#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

void computeQuadratic(int a, int b, int c, double* resultP, double* resultM);

int main() {

	int a = 10, b = 40, c = 30;
	double resultP, resultM;

	computeQuadratic(a, b, c, &resultP, &resultM);

	printf("첫번째 실근: %lf\n", resultM);
	printf("두번째 실근: %lf", resultP);

	return 0;

}

void computeQuadratic(int a, int b, int c, double* resultP, double* resultM) {

	*resultP = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
	*resultM = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);

}