#include <stdio.h>

int main()
{
	//Bài 1: Viết 1 chương trình nhập vào năm sinh và in năm sinh đó ra.
	int namSinh;
	printf_s("Hay nhap vao nam sinh cua ban: ");
	scanf_s("%d", &namSinh);
	printf_s("\nNam sinh cua ban la: %d\n", namSinh);
	printf_s("Tuoi cua ban la: %d", 2021 - namSinh);
}