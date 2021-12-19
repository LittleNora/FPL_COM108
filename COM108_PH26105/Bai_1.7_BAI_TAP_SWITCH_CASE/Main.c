#include <stdio.h>
/*
* Bai tap may tinh bo tui FPOLY
* 1. Phep cong 2 so
* 2. Phep tru 2 so
* 3. Phep nhan 2 so
* 4. Phep chia 2 so
*/

int main()
{
	double a, b;
	char choice;
	while (1)
	{
		printf_s("\nMoi ban nhap a: ");
		scanf_s("%lf", &a);
		printf_s("\nMoi ban nhap b: ");
		scanf_s("%lf", &b);
		getchar();
		printf_s("1. Phep cong\n");
		printf_s("2. Phep tru\n");
		printf_s("3. Phep nhan\n");
		printf_s("4. Phep chia\n");
		printf_s("Moi ban chon chuc nang: ");
		scanf_s("%c", &choice);
		printf_s("\n");
		switch (choice)
		{
		case '1':
			printf_s("%0.0lf + %0.0lf = %0.0lf\n", a, b, a + b);
			break;
		case '2':
			printf_s("%0.0lf - %0.0lf = %0.0lf\n", a, b, a - b);
			break;
		case '3':
			printf_s("%0.0lf * %0.0lf = %0.0lf\n", a, b, a * b);
			break;
		case '4':
			printf_s("%0.0lf / %0.0lf = %0.2lf\n", a, b, a / b);
			break;
		default:
			printf_s("Chuc nang ban chon khong ton tai!\n");
			break;
		}
	}
}