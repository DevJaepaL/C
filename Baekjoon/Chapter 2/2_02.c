/*���� ������ �Է¹޾� 90 ~100����
//A, 80 ~89���� B, 70 ~79���� C, 60 ~69���� D, 
������ ������ F�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.*/

#include<stdio.h>

int main()
{
	int score;

	scanf_s("%d", &score);

	if (score >= 90)
		printf("A\n");
	else if (score >= 80)
		printf("B\n");
	else if (score >= 70)
		printf("C\n");
	else if (score >= 60)
		printf("D\n");
	else
		printf("F\n");

	return 0;
}