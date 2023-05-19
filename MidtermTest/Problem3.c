#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {

	//Code Here
	int money;
	int price;

	printf("손님으로부터 받은 금액은 얼마입니까? ");
	scanf("%d", &money);

	printf("물건값은 얼마입니까? ");
	scanf("%d", &price);

	if (money < price) {

		printf("물건값이 %d원 부족합니다.", price - money);

	}
	else {

		money -= price;

		printf("거스름돈 : %d\n", money);

		int ftth = money / 50000; //오만원
		money = money % 50000;
		int tth = money / 10000; //만원
		money = money % 10000;
		int fth = money / 5000; //오천원
		money = money % 5000;
		int th = money / 1000; //천원
		money = money % 1000;
		int fh = money / 500; //오백원
		money = money % 500;
		int h = money / 100; //백원
		money = money % 100;
		int ft = money / 50; //오십원
		money = money % 50;
		int t = money / 10; //십원

		printf("오만원 : %d\n", ftth);
		printf("만원 : %d\n", tth);
		printf("오천원 : %d\n", fth);
		printf("천원 : %d\n", th);
		printf("오백원 : %d\n", fh);
		printf("백원 : %d\n", h);
		printf("오십원 : %d\n", ft);
		printf("십원 : %d\n", t);

	}


	return 0;

}