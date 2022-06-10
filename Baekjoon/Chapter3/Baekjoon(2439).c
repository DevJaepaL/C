#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	int cnt, star;

	scanf("%d", &cnt);
	for (int i = 1; i <= cnt; i++) {
		for (int space = cnt; space > i; space--) {
			printf(" ");
		}
		for (star = 1; star <= i; star++) {
			printf("*");
		}
		printf("\n");
	}
}