#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {

	int sides[3];

	printf("�ﰢ���� ������ �Է��Ͻÿ�: ");
	scanf("%d %d %d", &sides[0], &sides[1], &sides[2]);

	if (sides[0] == sides[1] && sides[0] == sides[2]) {

		printf("���ﰢ��\n");

	}
	else if (sides[0] == sides[1] || sides[1] == sides[2] || sides[2] == sides[0]) {

		printf("�̵ �ﰢ��\n");

	}

	return 0;

}