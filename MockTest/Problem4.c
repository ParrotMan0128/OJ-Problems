#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {

	char drink;

	printf("����: ");
	scanf("%c", &drink);

	if (drink == 'f' || drink == 'F') {

		printf("ȯŸ");

	}
	else if (drink == 'c' || drink == 'C') {

		printf("�ݶ�");

	}
	else if (drink == 'p' || drink == 'P') {

		printf("��ī������Ʈ");

	}
	else {

		printf("�Ǹ����� �ʴ� �����");

	}

	return 0;

}