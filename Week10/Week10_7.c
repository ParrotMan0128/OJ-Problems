#include <stdio.h>
#include <string.h>

void trim_left(char* string);

int main() {

	char test1[] = "  This is a house.";

	trim_left(test1);

	printf("%s", test1);

	return 0;

}

void trim_left(char* string) {

	int dis = 0;

	while (*(string + dis) == ' ') {

		dis++;

	}

	while (*string != '\0') {

		*string = *(string + dis);
		string++;

	}

}