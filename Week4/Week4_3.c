#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {

	int price;
	double discountRate;
	double finalPrice;

	printf("상품 가격을 입력하시오: ");
	scanf("%d", &price);

	printf("할인률을 입력하시오: ");
	scanf("%lf", &discountRate);

	finalPrice = price * ((100 - discountRate) * 0.01);

	printf("할인된 가격은 %.2lf입니다.", finalPrice);

	return 0;

}