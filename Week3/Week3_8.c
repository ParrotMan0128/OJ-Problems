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

	printf("�Ÿ��� �Է��Ͻÿ�: ");
	scanf("%d", &distance);

	printf("�ð��� �Է��Ͻÿ�: ");
	scanf("%d", &hour);

	printf("���� �Է��Ͻÿ�: ");
	scanf("%d", &minute);

	printf("�ʸ� �Է��Ͻÿ�: ");
	scanf("%d", &second);

	float time = hour + minute / MINUTE_TO_HOUR + second / SECOND_TO_HOUR;
	float speed = distance / time / METER_TO_KILOMETER;

	printf("�ӵ�: %lf", speed);

	return 0;

}