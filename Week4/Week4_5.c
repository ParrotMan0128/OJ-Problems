#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {

	int x, y;
	int quotient;
	int remainder;

	printf("ù ��° ������ �Է��Ͻÿ�: ");
	scanf("%d", &x);

	printf("�� ��° ������ �Է��Ͻÿ�: ");
	scanf("%d", &y);

	quotient = x / y;
	remainder = x % y;

	printf("���� %d�̰� �������� %d�Դϴ�.", quotient, remainder);

	return 0;

}