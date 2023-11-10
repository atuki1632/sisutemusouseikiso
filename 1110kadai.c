#include<stdio.h>

int main(void) {

	int count;
	for (count = 0; count < 10001; count++) {

		if (count % 13 == 0)
		{
			printf(" % d\n", count);
		}
		else if (count % 17 == 0)
		{
			printf("%d\n", count);
		}
	}
}
