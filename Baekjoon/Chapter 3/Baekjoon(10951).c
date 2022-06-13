#include <stdio.h>
#pragma warning(disable:4996)
/*	
	================================================
	이 문제는, while문의 종료 조건이 없기 때문에
	while문이 입력을 계속 받아주다가, 프로그램에서
	파일의 끝을 만났음을 알려줘야 함으로
	EOF 값에 도달하게 되면 while문을 탈출하는 조건으로
	코드를 만들어야만 한다.
	================================================
*/
int main(void)
{
	int num1, num2;
	int i = 1;

	while (scanf("%d %d", &num1, &num2)!=EOF)
	{
		printf("%d\n", num1 + num2);
	}
	return 0;
}