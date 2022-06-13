#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	int num1,i;

	scanf("%d", &num1);
	for(i = num1; i >= 1; i--)
	{
		printf("%d\n", i);
	}

	return 0;
}