#include <stdio.h>

int main()
{
	char a[50];

	scanf_s("%s", &a,sizeof(50));
	printf("%s?\?!", &a);

	return 0;
}