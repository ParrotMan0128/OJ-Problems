#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {

	double korScore, engScore, mathScore;
	double total;
	double avg;

	printf("3������ ������ �Է��Ѵ�: ");
	scanf("%lf %lf %lf", &korScore, &engScore, &mathScore);

	total = korScore + engScore + mathScore;
	avg = (korScore + engScore + mathScore) / 3.0;

	printf("���� = %.2lf\n", total);
	printf("��� = %.2lf\n", avg);

	return 0;

}