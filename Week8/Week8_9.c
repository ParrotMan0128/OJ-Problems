#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int throwDice();

int main() {

	//code here
	srand(time(NULL));
	int userDiceSum = 0;
	int cpuDiceSum = 0;

	for (int i = 0; i < 3; i++) {

		userDiceSum += throwDice();
		cpuDiceSum += throwDice();

	}

	if (userDiceSum > cpuDiceSum) {

		printf("����� �¸�");

	}
	else if (userDiceSum < cpuDiceSum) {

		printf("��ǻ�� �¸�");

	}
	else {

		printf("���º�");

	}

	return 0;

}

int throwDice() {

	int dice = rand() % 6 + 1;

	return dice;

}