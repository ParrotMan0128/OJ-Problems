#include <stdio.h>
#include <string.h>

int main() {

	char string[32];
	char result[32];

	int k = 0;

	printf("텍스트를 입력한다: ");

	gets(string);

	for (int i = 0; i < strlen(string); i++) {

		if (string[i] != 'a' && string[i] != 'e' && string[i] != 'i' && string[i] != 'o' && string[i] != 'u' &&
			string[i] != 'A' && string[i] != 'E' && string[i] != 'I' && string[i] != 'O' && string[i] != 'U') {

			result[k] = string[i];
			k++;

		}

	}

	result[k] = '\0';

	printf("최종 텍스트: %s", result);

	return 0;

}