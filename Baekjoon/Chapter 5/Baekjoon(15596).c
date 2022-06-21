/*	���� : ���� n���� �־����� ��, n���� ���� ���ϴ� �Լ��� �ۼ��Ͻÿ�.

	�ۼ��ؾ� �ϴ� �Լ��� ������ ����. 

	C, C11, C (Clang), C11 (Clang): long long sum(int *a, int n);
	a: ���� ���ؾ� �ϴ� ���� n���� ����Ǿ� �ִ� �迭 (0 �� a[i] �� 1,000,000, 1 �� n �� 3,000,000)
	n: ���� ���ؾ� �ϴ� ������ ����
	���ϰ�: a�� ���ԵǾ� �ִ� ���� n���� ��
*/

#include <stdio.h>

long long sum(int* a, int n) {
	long long ans = 0;
	for (int i = 0; i < n; i++) {
		ans += a[i];
	}

	return ans;
}