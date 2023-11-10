#include<stdio.h>
int main(void)
{
	int a, b,c, surplus, result;

	printf("Please Enter Number:");
	scanf_s("%d", &a);
	printf("Please Enter Other Number:");
	scanf_s("%d", &b);
	printf("Please Enter Other Number:");
	scanf_s("%d", &c);

	surplus = a % b%c

	;if (surplus == 0)
	{
		result = a / b/c;
		printf("%d/%d=%d\n", a, b,c, result);
	}

	return 0;
}
