#include <stdio.h>
#pragma warning(disable:4996)
/*	
	================================================
	�� ������, while���� ���� ������ ���� ������
	while���� �Է��� ��� �޾��ִٰ�, ���α׷�����
	������ ���� �������� �˷���� ������
	EOF ���� �����ϰ� �Ǹ� while���� Ż���ϴ� ��������
	�ڵ带 �����߸� �Ѵ�.
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