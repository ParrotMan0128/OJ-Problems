#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {

	int timesTable[9][9];
	int x, y;

	for (int i = 0; i < 9; i++) {

		for (int j = 0; j < 9; j++) {

			timesTable[i][j] = (i + 1) * (j + 1);

		}

	}

	printf("�������� �Է��Ͻÿ�(��: 9 3):");
	scanf("%d %d", &x, &y);

	printf("%dX%d=%d", x, y, timesTable[x - 1][y - 1]);

	return 0;

}