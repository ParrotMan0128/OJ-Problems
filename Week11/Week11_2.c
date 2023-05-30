#include <stdio.h>

struct email {

	char title[100];
	char receiver[50];
	char sender[50];
	char content[1000];
	char date[100];
	int priority;

};

int main() {

	struct email email = { .title = "안부 메일", .receiver = "chulsoo@hankuk.ac.kr", .sender = "hsh@hankuk.ac.kr", .content = "안녕하십니까? 별일 없으신지요?", .date = "2010/9/1", .priority = 1 };

	printf("%s\n", email.title);
	printf("%s\n", email.receiver);
	printf("%s\n", email.sender);
	printf("%s\n", email.content);
	printf("%s\n", email.date);
	printf("%d\n", email.priority);

	return 0;

}