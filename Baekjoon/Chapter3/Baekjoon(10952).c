#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	int num1, num2;

	while (1) // while 문을 통해 무한루프 생성
	{
		scanf("%d %d", &num1, &num2);
		if (num1 == 0 && num2 == 0) // 두개의 입력값이 0일 경우 무한루프 탈출
			break;
		printf("%d\n", num1 + num2);
	}
	
	return 0;
}