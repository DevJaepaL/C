/*	==================================================================
    ���� : ���л� ��������� 90%�� �ڽ��� �ݿ��� ����� �Ѵ´ٰ� �����Ѵ�.
    ����� �׵鿡�� ���� ������ �˷���� �Ѵ�.
    ù° �ٿ��� �׽�Ʈ ���̽��� ���� C�� �־�����.

    =====================================
    �Է�  : ��° �ٺ��� �� �׽�Ʈ ���̽�����
    �л��� �� N(1 �� N �� 1000, N�� ����)�� ù ���� �־�����,
    �̾ N���� ������ �־�����.
    ������ 0���� ũ�ų� ����, 100���� �۰ų� ���� �����̴�.

    =====================================
    ��� : �� ���̽����� �� �پ� ����� �Ѵ�
    �л����� ������ �ݿø��Ͽ� �Ҽ��� ��° �ڸ����� ����Ѵ�.
*/

#include <stdio.h>
#pragma warning(disable:4996)

#include<stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        int num;
        int sum = 0;
        int cnt = 0;
        double avg;
        scanf("%d", &num);
        int Array[num];
        for (int j = 0; j < num; j++)
        {
            scanf("%d", &Array[j]);
            sum += Array[j];
        }
        avg = sum / num;
        for (int k = 0; k < num; k++)
            if (avg < Array[k])
                cnt++;
        printf("%.3f%%\n", (float)cnt / num * 100);
    }
}