#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {

	int num, n;
	int newNum;

	printf("���ڸ� �Է��Ͻÿ�: ");
	scanf("%d", &num);

	printf("n�� �Է��Ͻÿ�: ");
	scanf("%d", &n);

	n = 0x01 << n;
	newNum = num | n;

	printf("���ο� ��= %d", newNum);

	return 0;

}

