#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define PI 3.141592

int main() {

	double radius = 0.0;
	double s = 0.0;
	double v = 0.0;

	printf("반지름을 입력하시오: ");
	scanf("%lf", &radius);

	s = 4.0 * PI * (radius * radius);
	v = (4.0 / 3.0) * PI * (radius * radius * radius);

	printf("구의 표면적: %lf\n", s);
	printf("구의 부피: %lf", v);

	return 0;

}