#include <stdio.h>

struct complex {

	double R;
	double I;

};

struct complex addComplex(double R1, double R2, double I1, double I2);

int main() {

	struct complex complex;

	double R1, R2, I1, I2;

	scanf("%lf %lf", &R1, &I1);
	scanf("%lf %lf", &R2, &I2);

	complex = addComplex(R1, R2, I1, I2);

	printf("%.1lf + %.1lfi", complex.R, complex.I);

	return 0;

}

struct complex addComplex(double R1, double R2, double I1, double I2) {

	struct complex result;

	result.R = R1 + R2;
	result.I = I1 + I2;

	return result;

}