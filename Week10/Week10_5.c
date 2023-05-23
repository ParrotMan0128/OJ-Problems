#include <stdio.h>
#include <string.h>

int checkPassword(char* string);

int main() {

	char password[32];

	while (1) {

		printf("암호를 생성하시오: ");

		gets(password);

		if (checkPassword(password) == 1) {

			printf("적정한 암호입니다.");
			break;

		}
		else {

			printf("숫자, 소문자, 대문자를 섞어서 암호를 다시 만드세요!\n");

		}

	}

}

int checkPassword(char* string) {

	int numberExist = 0;
	int lowerExist = 0;
	int upperExist = 0;

	while (*string != '\0') {

		if (*string >= '0' && *string <= '9') {

			numberExist = 1;

		}
		else if (*string >= 'a' && *string <= 'z') {

			lowerExist = 1;

		}
		else if (*string >= 'A' && *string <= 'Z') {

			upperExist = 1;

		}

		string++;

	}

	if (numberExist == 1 && lowerExist == 1 && upperExist == 1) {

		return 1;

	}
	else {

		return 0;

	}

}