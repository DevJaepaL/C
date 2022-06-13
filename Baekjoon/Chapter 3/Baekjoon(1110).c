#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int input,result;
	scanf("%d", &input);

	result = input;

	int n1, n2, n3, n4;
	int cnt = 0;

	while (1)
	{
		n1 = input / 10;
		n2 = input % 10;
		n3 = (n1 + n2) % 10;
		n4 = (n2 * 10) + n3;

		input = n4;
		cnt++;

		if (n4 == result)
			break;
	}

	printf("%d", cnt);
}