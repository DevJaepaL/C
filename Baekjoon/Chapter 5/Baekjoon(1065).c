/* ���� 1065�� ���� ( �ǹ� IV ���� ) */
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
	int max = 1001; // �Է°��� 1000 �̻��̸� ���α׷� ����
	scanf("%d", &input);
	if (input > max)
		return 0;
	else {
		result = HanNum(input);
		printf("%d\n", result);
	}

	return 0;
}