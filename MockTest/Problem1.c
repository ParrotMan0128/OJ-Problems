#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {

	double height;

	printf("Ű: ");
	scanf("%lf", &height);

	// �Ҽ� ù ° �ڸ����� ���
	printf("ǥ��ü���� %.1lf �Դϴ�.", (height - 100) * 0.9);

	return 0;

}