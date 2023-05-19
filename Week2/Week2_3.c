#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {

	int price_a = 0;
	int amount = 0;

	printf("상품 가격을 입력하시오: ");
	scanf("%d", &price_a);

	printf("상품 개수를 입력하시오: ");
	scanf("%d", &amount);

	int total_price = price_a * amount;

	printf("총 가격은 %d입니다.", total_price);

	return 0;

}