#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {

	int age;
	double money = 10000.0;

	printf("나이: ");
	scanf("%d", &age);

	// 잔액은 소수 둘 째 자리까지 출력

	if (age > 18) { // 만 19세 이상(성인)일 때

		printf("%.2lf\n", (money - 1250.0));
		printf("감사합니다");

	}
	else if (age >= 13 && age <= 18) { // 만 18세 이하 만 13세 이상(청소년)일 때

		printf("%.2lf\n", (money - 800.0));
		printf("반갑습니다");

	}
	else if (age <= 12 && age >= 6) { // 만 12세 이하 만 6세 이상(어린이)일 때

		printf("%.2lf\n", (money - 400.0));
		printf("안녕하세요");

	}
	else { // 만 5세 이하일 때

		printf("%.2lf\n", (money));

	}

	return 0;

}