#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void get(double value, int* i_part, double* f_part);

int main() {

	double actualNumber = 3.14;
	int i_part;
	double f_part;

	get(actualNumber, &i_part, &f_part);

	printf("���޹��� �Ǽ�=%lf\n", actualNumber);
	printf("������=%d\n", i_part);
	printf("�Ҽ���=%lf", f_part);

	return 0;

}

void get(double value, int* i_part, double* f_part) {

	*i_part = (int)value;
	*f_part = value - *i_part;

}