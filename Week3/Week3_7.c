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

	printf("char���� ũ��� %dbyte�Դϴ�.\n", size_char);
	printf("short���� ũ��� %dbyte�Դϴ�.\n", size_short);
	printf("int���� ũ��� %dbyte�Դϴ�.\n", size_int);
	printf("long���� ũ��� %dbyte�Դϴ�.\n", size_long);
	printf("long long���� ũ��� %dbyte�Դϴ�.\n", size_longlong);
	printf("float���� ũ��� %dbyte�Դϴ�.\n", size_float);
	printf("double���� ũ��� %dbyte�Դϴ�.\n", size_double);
	printf("long double���� ũ��� %dbyte�Դϴ�.", size_longdouble);

	return 0;

}