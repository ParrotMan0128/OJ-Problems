#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {

	double weight;
	double height;
	double BMI;

	printf("체중을 입력하시오: ");

	scanf("%lf", &weight);

	printf("신장을 입력하시오(단위: 미터): ");

	scanf("%lf", &height);

	BMI = weight / (height * height);

	printf("BMI: %.2lf", BMI);

	return 0;

}