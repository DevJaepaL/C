#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	int num1;

	scanf("%d", &num1);
	for (int i = 1; i <= num1; i++)
	{
		printf("%d\n", i);
	}

	return 0;
}