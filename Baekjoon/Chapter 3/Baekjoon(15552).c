#include <stdio.h>
#pragma warning(disable:4996)
/* C언어의 경우 입출력 방식을 
다른 인터프리터 언어 와는 달리
다른 방식으로 할 필요 없음.
*/
int main(void)
{
	int n;
	int num1, num2;

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &num1, &num2);
		printf("%d\n", num1 + num2);
	}

	return 0;
}