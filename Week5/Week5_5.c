#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {

	char input;

	printf("���ڸ� �Է��Ͻÿ�:");
	scanf("%c", &input);

	if (((int)input >= 65 && (int)input <= 90)) {

		printf("�빮���Դϴ�.\n");

	}
	else if (((int)input >= 97 && (int)input <= 122)) {

		printf("�ҹ����Դϴ�.\n");

	}

	return 0;

}