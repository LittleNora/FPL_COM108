#include <stdio.h>

int main() {
	char hoTen[100], soDienThoai[100];
	int namSinh;
	double diemC;
	printf_s("Hay nhap vao ho ten cua ban: ");
	gets_s(hoTen, 100);
	printf_s("Hay nhap vao nam sinh cua ban: ");
	scanf_s("%d", &namSinh);
	getchar();
	printf_s("Hay nhap vao so dien thoai cua ban: ");
	gets_s(soDienThoai, 100);
	printf_s("Hay nhap vao diem thi mon C cua ban: ");
	scanf_s("%lf", &diemC);
	printf_s("\nThong tin cua ban la:\n");
	printf_s("Ho ten: %s\nNam sinh: %d\nTuoi: %d\nSo dien thoai: %s\nDiem mon C: %0.1lf | ", hoTen, namSinh, 2021 - namSinh, soDienThoai, diemC);
	if (diemC >= 5)
	{
		printf_s("Qua mon\n");
	}
	else
	{
		printf_s("Hoc lai\n");
	}
}