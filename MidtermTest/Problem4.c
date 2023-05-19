#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {

	//Code Here
	int electricUse;
	scanf("%d", &electricUse);

	int tax = 0;

	if (electricUse <= 200) {

		tax = (int)(93.3 * electricUse) + 910;

	}
	else if (electricUse > 200 && electricUse <= 400) {

		tax = (int)((93.3 * 200) + ((electricUse - 200) * 187.9)) + 1600;

	}
	else if (electricUse > 400) {

		tax = (int)((93.3 * 200) + (200 * 187.9)) + ((electricUse - 400) * 280.6) + 7300;

	}

	printf("%d", tax);

	return 0;

}