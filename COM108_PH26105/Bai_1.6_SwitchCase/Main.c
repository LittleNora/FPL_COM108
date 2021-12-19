#include <stdio.h>
int main()
{
	printf_s("Menu FPOLY\n");
	printf_s("1. Pho bo\n");
	printf_s("2. Pho ga\n");
	printf_s("3. Com rang\n");
	printf_s("4. Bun moc\n");
	printf_s("\nMoi ban chon mon an: ");
	int choice;
	scanf_s("%d", &choice);
	printf_s("\n");
	switch (choice)
	{
	case 1:
		printf_s("Day la pho bo cua ban!\n");
		break;
	case 2:
		printf_s("Day la pho ga cua ban!\n");
		break;
	case 3:
		printf_s("Day la com rang cua ban!\n");
		break;
	case 4:
		printf_s("Day la bun moc cua ban!\n");
		break;
	default:
		printf_s("Ban da nhap sai lua chon! ");
		break;
	}
}