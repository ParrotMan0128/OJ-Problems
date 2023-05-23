#include <stdio.h>
#include <string.h>
#include <ctype.h>

void changeLowerToUpper(char* string);
void addPoint(char* string);

int main() {

	char string[32];

	printf("텍스트를 입력하시오:");

	gets(string);

	changeLowerToUpper(string);
	addPoint(string);

	printf("결과 텍스트 출력:%s", string);

	return 0;

}

void changeLowerToUpper(char* string) {

	while (*string == ' ') {

		string++;

	}

	*string = toupper(*string);

}

void addPoint(char* string) {

	while (*string != '\0') {

		string++;

	}

	*string = '.';
	*(string + 1) = '\0';

}