#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {

	int price;
	double discountRate;
	double finalPrice;

	printf("��ǰ ������ �Է��Ͻÿ�: ");
	scanf("%d", &price);

	printf("���η��� �Է��Ͻÿ�: ");
	scanf("%lf", &discountRate);

	finalPrice = price * ((100 - discountRate) * 0.01);

	printf("���ε� ������ %.2lf�Դϴ�.", finalPrice);

	return 0;

}