#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {

	//Code Here
	int money;
	int price;

	printf("�մ����κ��� ���� �ݾ��� ���Դϱ�? ");
	scanf("%d", &money);

	printf("���ǰ��� ���Դϱ�? ");
	scanf("%d", &price);

	if (money < price) {

		printf("���ǰ��� %d�� �����մϴ�.", price - money);

	}
	else {

		money -= price;

		printf("�Ž����� : %d\n", money);

		int ftth = money / 50000; //������
		money = money % 50000;
		int tth = money / 10000; //����
		money = money % 10000;
		int fth = money / 5000; //��õ��
		money = money % 5000;
		int th = money / 1000; //õ��
		money = money % 1000;
		int fh = money / 500; //�����
		money = money % 500;
		int h = money / 100; //���
		money = money % 100;
		int ft = money / 50; //���ʿ�
		money = money % 50;
		int t = money / 10; //�ʿ�

		printf("������ : %d\n", ftth);
		printf("���� : %d\n", tth);
		printf("��õ�� : %d\n", fth);
		printf("õ�� : %d\n", th);
		printf("����� : %d\n", fh);
		printf("��� : %d\n", h);
		printf("���ʿ� : %d\n", ft);
		printf("�ʿ� : %d\n", t);

	}


	return 0;

}