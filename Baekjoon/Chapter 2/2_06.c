#include <stdio.h>

int main()
{
	int Hr, Min, Time;

	scanf_s("%d %d", &Hr, &Min);
	scanf_s("%d", &Time);

	Hr += Time / 60;
	Min += Time % 60;

	if (Min >= 60)
	{
		Hr += 1;
		Min -= 60;
	}
	if (Hr >= 24)
	{
		Hr -= 24;
	}

	printf("%d %d", Hr, Min);

	return 0;
}