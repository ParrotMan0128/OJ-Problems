#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define PI 3.141592

int main() {

	double radius = 0.0;
	double s = 0.0;
	double v = 0.0;

	printf("�������� �Է��Ͻÿ�: ");
	scanf("%lf", &radius);

	s = 4.0 * PI * (radius * radius);
	v = (4.0 / 3.0) * PI * (radius * radius * radius);

	printf("���� ǥ����: %lf\n", s);
	printf("���� ����: %lf", v);

	return 0;

}