#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {

	char grade;

	printf("������ �Է��Ͻÿ�:");
	scanf("%c", &grade);

	switch (grade) {

	case 'A':

		printf("���� ���߾��!\n");
		break;


	case 'B':

		printf("�����ϴ�.\n");
		break;


	case 'C':

		printf("�����������ϴ�.\n");
		break;


	case 'D':

		printf("�� ����غ�����.\n");
		break;


	case 'F':

		printf("��Ÿ�����ϴ�.\n");
		break;

	default:

		break;

	}

	return 0;

}