#include <stdio.h>

int main()
{
	double diemC;
	printf_s("Xin moi nhap vao diem mon C: ");
	scanf_s("%lf", &diemC);
	printf_s("\n\n");
	if (diemC < 0 || diemC > 10)
	{
		printf_s("Diem khong hop le.\n");
	}
	else if ((diemC >= 9) && (diemC <= 10))
	{
		printf_s("Chuc mung ban dat danh hieu xuat sac!\n");
	}
	else if (diemC >= 8 && diemC <9)
	{
		printf_s("Chuc mung ban dat danh hieu gioi!\n");
	}
	else if (diemC >= 6 && diemC < 8)
	{
		printf_s("Chuc mung ban dat danh hieu kha!\n");
	}
	else if (diemC >= 5 && diemC < 6)
	{
		printf_s("Chuc mung ban dat danh hieu trung binh!\n");
	}
	else
	{
		printf_s("Chuc mung ban duoc hoc lai!\n");
	}
}