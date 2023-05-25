#include <stdio.h>
#include <string.h>

void trim_left(char* string);

int main() {

	char test2[] = "  This Is A House.";

	trim_left(test2);

	printf("%s", test2);

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