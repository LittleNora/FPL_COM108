#include <stdio.h>

int main()
{
	//Phần 1: Toán tử số học
	int a = 5;
	a++;
	++a;
	--a;
	printf_s("%d\n", a);

	//Phần 2: Toán tử so sánh
	double diemThiC = 5;
	printf_s("%d\n", diemThiC > 5);
	printf_s("%d\n", diemThiC < 5);
	printf_s("%d\n", diemThiC == 5);
	printf_s("%d\n", diemThiC >= 5);

	//Phần 3: Toán tử logic
	int nghi = 4;
	printf_s("%d\n", (diemThiC > 5) && (nghi >= 4));
	printf_s("%d\n", (diemThiC > 5) || (nghi >= 4));
	printf_s("%d\n", (diemThiC > 5) || !(nghi >= 4));

	//Phần 4: Toán tử gán
	int number = 5;
	number += 5;
	printf_s("%d\n", number);
}