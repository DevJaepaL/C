#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	int num1, num2;

	while (1) // while ���� ���� ���ѷ��� ����
	{
		scanf("%d %d", &num1, &num2);
		if (num1 == 0 && num2 == 0) // �ΰ��� �Է°��� 0�� ��� ���ѷ��� Ż��
			break;
		printf("%d\n", num1 + num2);
	}
	
	return 0;
}