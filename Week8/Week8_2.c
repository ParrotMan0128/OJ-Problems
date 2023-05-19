#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

double getBigger(double x, double y);

int main(void) {

	//code here
	double x, y;
	printf("실수를 입력하시오: ");
	scanf("%lf", &x);
	printf("실수를 입력하시오: ");
	scanf("%lf", &y);

	printf("더 큰수는 %lf입니다.", getBigger(x, y));

	return 0;

}

double getBigger(double x, double y) {

	double result = x > y ? x : y;

	return result;

}