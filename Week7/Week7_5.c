#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {

	int scores[3][3] = {
		{30, 10, 11},
		{40, 90 ,32},
		{70, 65, 56}
	};

	int sum = 0;
	double avg;

	for (int i = 0; i < 3; i++) {

		for (int j = 0; j < 3; j++) {

			sum += scores[i][j];

		}
	}

	avg = sum / 9.0;

	printf("평균점수=%lf", avg);

	return 0;

}