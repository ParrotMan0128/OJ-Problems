#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {

	int angle_A = 0;
	int angle_B = 0;
	int angle_C = 0;

	printf("�ﰢ���� ���� 2��: ");
	scanf("%d %d", &angle_A, &angle_B);

	angle_C = 180 - angle_A - angle_B;

	printf("����° ���� %d �Դϴ�.", angle_C);

	return 0;

}