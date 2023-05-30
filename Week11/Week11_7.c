#include <stdio.h>

enum game { SCISSORS, ROCK, PAPER };

int main() {

	srand(time(NULL));

	int user_Input, AI_Input;;

	printf("가위(0), 바위(1), 보(2)를 입력하세요: ");

	scanf("%d", &user_Input);

	AI_Input = rand() % 3;

	if (AI_Input == user_Input) {

		printf("비겼습니다.");

	}
	else if (AI_Input > (user_Input + 1) % 3) {

		printf("컴퓨터가 졌습니다.");

	}
	else {

		printf("컴퓨터가 이겼습니다.");

	}

	return 0;

}