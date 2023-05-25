#include <stdio.h>
#include <string.h>

void createFiveFiles(char* name);

int main() {

	char fileName[32];

	printf("파일 이름의 첫 부분을 입력하시오: ");

	gets(fileName);

	createFiveFiles(fileName);

	return 0;

}

void createFiveFiles(char* name) {

	for (int i = 0; i < 5; i++) {

		printf("%s%d.png ", name, i);

	}

}