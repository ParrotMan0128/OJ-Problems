#include <stdio.h>
#include <string.h>

void trim_left(char* string);

int main() {

	char test1[] = "  This is a house.";

	trim_left(test1);

	printf("%s", test1);

}

void trim_left(char* string) {

	int j;

	while (*string == ' ') {

		j = 0;

		if (*string == ' ') {

			while (*(string + j) != '\0') {

				*(string + j) = *(string + j + 1);
				j++;

			}

		}

	}

}