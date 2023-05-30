#include <stdio.h>

struct Time {

	int Hour;
	int Minute;
	int Second;

};

struct Time computeDiffOfTime(struct Time Start, struct Time End);

int main() {

	struct Time start, end, diff;

	printf("시작시간(시, 분, 초): ");
	scanf("%d %d %d", &start.Hour, &start.Minute, &start.Second);

	printf("종료시간(시, 분, 초): ");
	scanf("%d %d %d", &end.Hour, &end.Minute, &end.Second);

	diff = computeDiffOfTime(start, end);

	printf("소요시간 %d:%d:%d", diff.Hour, diff.Minute, diff.Second);

	return 0;

}

struct Time computeDiffOfTime(struct Time Start, struct Time End) {

	struct Time diff;

	diff.Hour = End.Hour - Start.Hour;

	diff.Minute = End.Minute - Start.Minute;

	if (diff.Minute < 0) {

		diff.Minute += 60;
		diff.Hour -= 1;

	}

	diff.Second = End.Second - Start.Second;

	if (diff.Second < 0) {

		diff.Second += 60;
		diff.Minute -= 1;

	}

	return diff;

}