#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {

	int input_a = 0;
	int input_b = 0;
	int input_c = 0;

	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &input_a);

	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &input_b);

	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &input_c);

	float avg = (input_a + input_b + input_c) / 3.0;

	printf("����� %f�Դϴ�.", avg);

	return 0;

}