#include <stdio.h>

int main()
{
	char c;
	int a;
	while (1)
	{
		printf_s("Moi ban chon chuc nang: ");
		scanf_s("%c", &c);
		switch (c)
		{
		case '1':
			printf_s("Moi ban nhap 1 so: ");
			scanf_s("%d", &a);
			printf_s("\n%d\n", a);
			break;
		default:
			break;
		}
	}
}