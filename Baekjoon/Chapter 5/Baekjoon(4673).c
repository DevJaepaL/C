/*	백준 4673번 (실버 V 문제) */

#include <stdio.h>

int self_num(int sum) {
	int sumNum = sum;
	while (sum != 0) {
		sumNum += sum % 10;
		sum /= 10;
	}

	return sumNum;
}

int main(void) {
	int temp , checkNum;
	int array[10001];

	for (int i = 1; i < 10001; i++) {
		checkNum = self_num(i);
		
		if (checkNum < 10001) {
			array[checkNum] = 1;
		}
	}

	for (int i = 1; i < 10001; i++) {
		if (array[i] != 1)
			printf("%d\n", i);
	}

	return 0;
}