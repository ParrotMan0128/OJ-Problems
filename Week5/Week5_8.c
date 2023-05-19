#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {

	double income;
	double tax;

	printf("과세 표준을 입력하시오(만원): ");
	scanf("%lf", &income);

	if (income <= 1000) {

		tax = income * 0.08;

	}
	else if (income > 1000 && income <= 4000) {

		tax = (income - 1000) * 0.17 + 1000 * 0.08;

	}
	else if (income > 4000 && income <= 8000) {

		tax = (income - 4000) * 0.26 + 1000 * 0.08 + 3000 * 0.17;

	}
	else {

		tax = (income - 8000) * 0.35 + 1000 * 0.08 + 3000 * 0.17 + 4000 * 0.26;

	}

	printf("소득세는 %d만원입니다", (int)tax);

	return 0;

}