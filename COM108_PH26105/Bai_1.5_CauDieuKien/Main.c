#include <stdio.h>

int main()
{
	//VD1: Viết 1 chương trình nhập điểm thi và thông báo học lại
	double diemThiC;
	/*printf_s("Moi ban nhap diem C: ");
	scanf_s("%lf", &diemThiC);
	if (diemThiC >= 5) {
		printf_s("\nThat dang tiec, ban khong duoc thi lai.");
		return;
	}
	else
	{
		printf_s("\nChuc mung ban da mat 759k.");
	}*/
	double diemTA = 9, diemCsharp = 9;
	if (diemCsharp >= 5)
	{
		printf_s("Chuc mung bo me ban se tang iphone 7");
	}
	else if (diemCsharp >= 5 && diemTA >= 5)
	{
		printf_s("Chuc mung bo me ban se tang iphone 8+");
	}
	else if (diemCsharp >= 8 && diemTA >= 8)
	{
		printf_s("Chuc mung bo me ban se tang iphone 13");
	}
	else
	{
		printf_s("Chuc mung cac ban se bi hoc lai");
	}

}