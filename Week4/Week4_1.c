#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {

	double weight;
	double height;
	double BMI;

	printf("ü���� �Է��Ͻÿ�: ");

	scanf("%lf", &weight);

	printf("������ �Է��Ͻÿ�(����: ����): ");

	scanf("%lf", &height);

	BMI = weight / (height * height);

	printf("BMI: %.2lf", BMI);

	return 0;

}