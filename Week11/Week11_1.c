/*

	일단 보류

*/

#include <stdio.h>

#define MAX_LENGTH 32

struct student {

	union number {

		char StudentNumner[MAX_LENGTH];
		char ResidentNubmer[MAX_LENGTH];

	};

	char Name[MAX_LENGTH];
	char PhoneNumber[MAX_LENGTH];

};

int main() {

	struct student s[10] = {
	{ "20170001", "홍길동1", "111-1111" },
	{ "990301-1234567", "홍길동2", "111-222" } };

	for (int i = 0; i < 10; i++) {

		printf("%s\n", s[i].Name);

	}

	return 0;

}