#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	int cnt, num1, num2;

	scanf("%d", &cnt);

	for (int i = 1; i <= cnt; i++)
	{
		scanf("%d %d", &num1, &num2);
		printf("Case #%d: %d + %d = %d\n", i, num1, num2, num1 + num2);
	}

	return 0;
}
