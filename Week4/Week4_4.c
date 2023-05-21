#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {

	double korScore, engScore, mathScore;
	double total;
	double avg;

	printf("3과목의 점수를 입력한다: ");
	scanf("%lf %lf %lf", &korScore, &engScore, &mathScore);

	total = korScore + engScore + mathScore;
	avg = (korScore + engScore + mathScore) / 3.0;

	printf("총점 = %.2lf\n", total);
	printf("평균 = %.2lf\n", avg);

	return 0;

}