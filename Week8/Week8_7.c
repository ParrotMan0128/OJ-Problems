#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

double computeDistance2D(double x1, double y1, double x2, double y2);

int main() {

	//code here
	double x1, y1, x2, y2;
	scanf("%lf %lf", &x1, &y1);
	scanf("%lf %lf", &x2, &y2);

	printf("%lf", computeDistance2D(x1, y1, x2, y2));

	return 0;

}

double computeDistance2D(double x1, double y1, double x2, double y2) {

	double distance = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));

	return distance;

}