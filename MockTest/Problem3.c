#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {

	int age;
	double money = 10000.0;

	printf("����: ");
	scanf("%d", &age);

	// �ܾ��� �Ҽ� �� ° �ڸ����� ���

	if (age > 18) { // �� 19�� �̻�(����)�� ��

		printf("%.2lf\n", (money - 1250.0));
		printf("�����մϴ�");

	}
	else if (age >= 13 && age <= 18) { // �� 18�� ���� �� 13�� �̻�(û�ҳ�)�� ��

		printf("%.2lf\n", (money - 800.0));
		printf("�ݰ����ϴ�");

	}
	else if (age <= 12 && age >= 6) { // �� 12�� ���� �� 6�� �̻�(���)�� ��

		printf("%.2lf\n", (money - 400.0));
		printf("�ȳ��ϼ���");

	}
	else { // �� 5�� ������ ��

		printf("%.2lf\n", (money));

	}

	return 0;

}