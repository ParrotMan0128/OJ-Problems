#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {

	char a = 0;
	short b = 0;
	int c = 0;
	long d = 0;
	long long e = 0;
	float f = 0;
	double g = 0;
	long double h = 0;

	int size_char = sizeof a;
	int size_short = sizeof b;
	int size_int = sizeof c;
	int size_long = sizeof d;
	int size_longlong = sizeof e;
	int size_float = sizeof f;
	int size_double = sizeof g;
	int size_longdouble = sizeof h;

	printf("char형의 크기는 %dbyte입니다.\n", size_char);
	printf("short형의 크기는 %dbyte입니다.\n", size_short);
	printf("int형의 크기는 %dbyte입니다.\n", size_int);
	printf("long형의 크기는 %dbyte입니다.\n", size_long);
	printf("long long형의 크기는 %dbyte입니다.\n", size_longlong);
	printf("float형의 크기는 %dbyte입니다.\n", size_float);
	printf("double형의 크기는 %dbyte입니다.\n", size_double);
	printf("long double형의 크기는 %dbyte입니다.", size_longdouble);

	return 0;

}