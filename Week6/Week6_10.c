#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {

	int n;
	int sum = 0;

	printf("n�� ���� �Է��Ͻÿ�: ");
	scanf("%d", &n);

	sum = (n * (n + 1) * (2 * n + 1)) / 6;

	printf("��갪�� %d�Դϴ�.", sum);

	return 0;

}