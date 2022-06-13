#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	int maxNum, filterNum, input;

	scanf("%d %d", &maxNum, &filterNum);
	for (int i = 0; i < maxNum; i++) {
		scanf("%d", &input);

		if (input < filterNum)
			printf("%d ", input);
	}
	printf("\n");
	return 0;
}