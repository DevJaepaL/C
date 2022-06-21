/* 백준 1065번 예제 ( 실버 IV 문제 ) */
#include <stdio.h>
#pragma warning(disable:4996)
int HanNum(int a) {
	int hun, ten, one;
	int count = 0;

	if (a < 100) {
		return a;
	}

	else {
		for (int i = 100; i <= a; i++) {
			hun = i / 100;
			ten = (i % 100) / 10;
			one = (i % 100) % 10;

			if ((hun - ten) == (ten - one))
				count++;
		}

		return (count + 99);
	}
}

int main(void) {
	int input, result;
	int max = 1001; // 입력값이 1000 이상이면 프로그램 종료
	scanf("%d", &input);
	if (input > max)
		return 0;
	else {
		result = HanNum(input);
		printf("%d\n", result);
	}

	return 0;
}