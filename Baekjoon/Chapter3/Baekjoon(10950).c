#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	int t;
	scanf("%d", &t);

	int num1, num2;

	for (int i = 0; i < t; ++i){
		scanf("%d %d", &num1, &num2);
		printf("%d\n", num1 + num2);
	}

	return 0;
}