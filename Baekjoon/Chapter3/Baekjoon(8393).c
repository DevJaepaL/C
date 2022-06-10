#include <stdio.h>
#pragma warning(disable:4996)
int main(void)
{
	int a = 0;
	int n;

	scanf("%d", &n);

	for (int i = 0; i <= n; i++)
	{
		a += i;
	}

	printf("%d", a);

	return 0;
}