#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define MINUTE_TO_HOUR 60.0
#define SECOND_TO_HOUR 3600.0
#define METER_TO_KILOMETER 1000.0

int main() {

	int distance = 0;
	int hour = 0;
	int minute = 0;
	int second = 0;

	printf("거리를 입력하시오: ");
	scanf("%d", &distance);

	printf("시간을 입력하시오: ");
	scanf("%d", &hour);

	printf("분을 입력하시오: ");
	scanf("%d", &minute);

	printf("초를 입력하시오: ");
	scanf("%d", &second);

	float time = hour + minute / MINUTE_TO_HOUR + second / SECOND_TO_HOUR;
	float speed = distance / time / METER_TO_KILOMETER;

	printf("속도: %lf", speed);

	return 0;

}