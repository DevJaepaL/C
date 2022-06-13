#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	int input,star;

	scanf("%d", &input);
	for (int i = 1; i <= input; i++){
		for (star = 1; star <= i; star++) {
		printf("*");
		}
		
	printf("\n");
	}

	return 0;
}