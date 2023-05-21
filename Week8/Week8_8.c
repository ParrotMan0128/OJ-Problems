#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int getCoinNumber();

int main() {

	//code here
	srand(time(NULL));

	int coin = getCoinNumber();
	int userCoin;

	scanf("%d", &userCoin);

	if (userCoin != coin) {

		printf("사용자가 이겼습니다.");

	}
	else {

		printf("컴퓨터가 이겼습니다.");

	}

	return 0;

}

int getCoinNumber() {

	int coin = rand() % 2;

	return coin;

}