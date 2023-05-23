#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

	char string[32] = { 0 };

	printf("텍스트를 입력하시오:");

	gets(string);

	for (int i = 0; i < strlen(string); i++) {

		string[i] = toupper(string[i]);

	}

	printf("대문자 출력:%s", string);

	return 0;

}