#include<stdio.h>
#include<math.h>

int main(void)
{
	float a, b, c;
	float discriminant;
	float kai1, kai2;
	float real, imag;
	printf("二次方程式の定数を入力してください\n");
	printf("a=");
	scanf_s("%f", &a);
	printf("b=");
	scanf_s("%f", &b);
	printf("c=");
	scanf_s("%f", &c);
	discriminant = b * b - 4 * a * c;

	int upperCaseCount = 0;

	if (a == 0) {
		printf("aが０だよ ０以外にしろ");
	}
	else if (discriminant > 0 ) {
		kai1 = (-b + sqrt(discriminant)) / (2 * a);
		kai2 = (-b - sqrt(discriminant)) / (2 * a);
		printf("二次方程式の解：x=%.2f,%2f\n", kai1, kai2);
	}
	else if (discriminant == 0 ) {
		kai1 = kai2 = -b / (2 * a);
		printf("二次方程式の解:x=%.2f,%.2f\n", kai1, kai2);
	}
	else {
		real = -b / (2 * a);
		imag = sqrt(-discriminant) / (2 * a);
		printf("二次方程式の解：%.2f+%.2fi,%.2f-%.2fi\n",real, imag, real, imag);
	}

	return 0;
}
