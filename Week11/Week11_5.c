#include <stdio.h>

#define MAX_NAME_LENGTH 32
#define MAX_PHONE_NUMBER_LENGTH 32

#define SIZE 10

struct employee {

	int Number;
	char Name[MAX_NAME_LENGTH];
	int Age;
	char PhoneNumner[MAX_PHONE_NUMBER_LENGTH];

};

int main() {

	struct employee e[SIZE] = {
		{ 1, "홍길동1", 20, "111-1111" },
		{ 2, "홍길동2", 25, "111-1112" },
		{ 3, "홍길동3", 60, "111-1113" },
		{ 4, "홍길동4", 40, "111-1114" },
		{ 5, "홍길동5", 50, "111-1115" },
		{ 6, "홍길동6", 45, "111-1116" },
		{ 7, "홍길동7", 32, "111-1117" },
		{ 8, "홍길동8", 23, "111-1118" },
		{ 9, "홍길동9", 29, "111-1119" },
		{ 10, "홍길동10", 62, "111-1120" } };

	for (int i = 0; i < SIZE; i++) {

		if (e[i].Age >= 20 && e[i].Age <= 30) {

			printf("%s\n", e[i].Name);

		}

	}

	return 0;

}