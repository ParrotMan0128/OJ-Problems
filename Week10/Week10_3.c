#include <stdio.h>
#include <string.h>

int main() {

	char string[32];

	printf("텍스트를 입력하시오: ");

	gets(string);

	printf("공백이 제거된 텍스트: ");

	for (int i = 0; i < strlen(string); i++) {

		if (string[i] == ' ' && string[i + 1] == ' ') {

			continue;

		}
		else {

			printf("%c", string[i]);

		}

	}


	return 0;

}