#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {

	char input;

	printf("���ڸ� �Է��Ͻÿ�:");
	scanf("%c", &input);

	if (((int)input >= 65 && (int)input <= 90) || ((int)input >= 97 && (int)input <= 122)) {

		printf("���ĺ��Դϴ�.");

	}
	else if ((int)input >= 48 && (int)input <= 57) {

		printf("�����Դϴ�.\n");

	}
	else {

		printf("Ư�������Դϴ�.\n");

	}

	return 0;

}