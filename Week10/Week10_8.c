#include <stdio.h>
#include <string.h>

void trim_right(char* string);

int main() {

	char test1[] = "This is a house.   ";

	trim_right(test1);

	printf("%s", test1);

}

void trim_right(char* string) {

	string += strlen(string) - 1;

	while (*string == ' ') {

		*string = *(string + 1);
		string--;

	}

}