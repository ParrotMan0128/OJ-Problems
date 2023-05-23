#include <stdio.h>
#include <string.h>

int main() {

	char str[32];
	int freq[123] = { 0 };

	printf("텍스트를 입력하시오:");
	gets(str);

	for (int i = 0; i < strlen(str); i++) {

		freq[str[i]]++;

	}

	for (int i = 'a'; i <= 'z'; i++) {

		if (freq[i] != 0) {

			printf("%c 문자가 %d번 등장하였음!\n", i, freq[i]);

		}

	}

	return 0;

}