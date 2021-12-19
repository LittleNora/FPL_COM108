#include <stdio.h>

void bai1();
void bai2();
void bai3();
void bai4();
void bai5();

int main() {

	bai1();
}

void bai1() {
	/*
	*Bài 1: Khai báo 1 mảng số nguyên gồm các phần tử sau
		* int arrNumberFpoly[] = { 88,7,9,6,5,8 };	 *
		* -In số 5 ra màn hình bằng câu printf.
		* -In tất cả các phần tử có ở trong mảng ra màn hình
		* -In tất cả các giá trị chẵn ra màn hình.
	*/
	int arrNumberFpoly[] = { 88,7,9,6,5,8 };
	printf_s("%d\n", 5);
	for (int i = 0; i < 6; i++)
	{
		printf_s("%d ", arrNumberFpoly[i]);
	}
	printf_s("\nCac gia tri chan cua mang la: ");
	for (int i = 0; i < 6; i++)
	{
		if (arrNumberFpoly[i] % 2 == 0)
		{
			printf_s("%d ", arrNumberFpoly[i]);
		}
	}
}

void bai2() { /*Bài 2: Cho người dùng nhập vào 1 mảng số nguyên và in tổng dãy số người dùng đã nhập ra màn hình.*/
	int arrNguyen[100], n, tong = 0;
	printf_s("Ban muon nhap vao mang bao nhieu so nguyen: ");
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		printf_s("Hay nhap gia tri vao index [%d]: ", i);
		scanf_s("%d", &arrNguyen[i]);
		tong += arrNguyen[i];
	} 
	printf_s("\n");
	printf_s("Tong cua day so ban vua nhap vao mang la: %d", tong);
}

void bai3() { /*Bài 3: Cho người dùng nhập vào 1 mảng số nguyên rồi in ra số lớn nhất trong mảng*/
	int arrNguyen[100], n, max;
	printf_s("Ban muon nhap vao mang bao nhieu so nguyen: ");
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		printf_s("Hay nhap gia vao index [%d]: ", i);
		scanf_s("%d", &arrNguyen[i]);
	}
	max = arrNguyen[0];
	for (int i = 1; i < n; i++)
	{
		if (max < arrNguyen[i])
		{
			max = arrNguyen[i];
		}
	}
	printf_s("So lon nhat trong mang ban vua nhap la: %d", max);
}

void bai4() { /*Bài 4: Cho người dùng nhập vào 1 mảng số nguyên cho in ra các số chẵn lẻ trên 2 dòng riêng biệt.*/
	int arrNguyen[100], n;
	printf_s("Ban muon nhap vao mang bao nhieu so nguyen: ");
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++) {
		printf_s("Hay nhap gia tri vao index [%d]: ", i);
		scanf_s("%d", &arrNguyen[i]);
	}
	printf_s("So chan cua mang la: ");
	for (int i = 0; i < n; i++) {
		if (arrNguyen[i] % 2 == 0)
		{
			printf_s("%d ", arrNguyen[i]);
		}
	}
	printf_s("\n");
	printf_s("So le cua mang la: ");
	for (int i = 0; i < n; i++) {
		if (arrNguyen[i] % 2 != 0)
		{
			printf_s("%d ", arrNguyen[i]);
		}
	}
}

void bai5() { /*Bài 5: Cho người dùng nhập vào 1 mảng chẵn nếu là số lẻ nhập vào bắt nhập lại.*/
	int arrNguyen[100], n;
	printf_s("Ban muon nhap vao mang bao nhieu so nguyen: ");
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		do
		{
			printf_s("Hay nhap so chan vao index [%d]: ", i);
			scanf_s("%d", &arrNguyen[i]);
			if (arrNguyen[i] % 2 != 0)
			{
				printf_s("So ban nhap vao khong phai la so chan, hay nhap lai!\n");
			}
		} while (arrNguyen[i] % 2 != 0);
	}
	printf_s("Cac so chan ban vua nhap vao mang la: ");
	for (int i = 0; i < n; i++)
	{
		printf_s("%d ", arrNguyen[i]);
	}
}