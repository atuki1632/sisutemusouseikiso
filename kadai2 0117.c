#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
	srand(time(0));

	int i = (rand() % 20) + 1;

	int s = (rand() % 20) + 1;

	int c = (rand() % 20) + 1;
	printf("あなたの記憶力は, ");
	printf("%d", i);
	printf("あなたの瞬発力は, ");
	printf("%d", s);
	printf("あなたの魅力は, ");
	printf("%d", c);
	int x = i + s + c;
	int upperCaseCount = 0;
	if (x < 21) {
		upperCaseCount++;
	}
	printf("あなたの能力値は, ");
	printf("%d", x);
	if (i > s >= c && upperCaseCount == 1) {
		printf("mage, ");
	}
	else if (i > c >= s && upperCaseCount == 1)
	{
		printf("mage, ");
	}
	else  if (s > i >= c && upperCaseCount == 1)
	{
		printf("knight, ");
	}
	else if (s > c >= i && upperCaseCount == 1)
	{
		printf("knight, ");
	}
	else  if (c > i >= s && upperCaseCount == 1)
	{
		printf("thief, ");
	}

	else  if (c > s >= i && upperCaseCount == 1)
	{
		printf("thief, ");
	}
	else
	{
		printf("能力値の合計が２０を超えました。あなたはヒーローです。, ");
	}
	return 0;
}
