#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {

	int price_a = 0;
	int amount = 0;

	printf("��ǰ ������ �Է��Ͻÿ�: ");
	scanf("%d", &price_a);

	printf("��ǰ ������ �Է��Ͻÿ�: ");
	scanf("%d", &amount);

	int total_price = price_a * amount;

	printf("�� ������ %d�Դϴ�.", total_price);

	return 0;

}