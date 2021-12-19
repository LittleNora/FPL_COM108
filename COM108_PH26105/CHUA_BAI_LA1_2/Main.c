#include <stdio.h>

void bai5()
{
	//In bảng cửu chương theo khoảng
	int khoang1, khoang2;
	printf_s("Moi ban nhap khoang 1: ");
	scanf_s("%d", &khoang1);
	printf_s("Moi ban nhap khoang 2: ");
	scanf_s("%d", &khoang2);
	//Sử dụng thuật toán hoán vị
	if (khoang1 > khoang2) {
		int temp = khoang1;
		khoang1 = khoang2;
		khoang2 = temp;
	}
	for (int i = khoang1; i <= khoang2; i++) {
		for (int j = 1; j <= 10; j++) {
			printf_s("%d x %d = %d\n", i, j, i * j);
		} printf_s("\n");
	}
}

void bai7() {
	int so, soLanChay, tongSoNguyen = 0;
	printf_s("Moi ban nhap so lan chay: ");
	scanf_s("%d", &soLanChay);
	for (int i = 1; i <= soLanChay; i++) {
		printf_s("Nhap vao so thu %d: ", i);
		scanf_s("%d", &so);
		tongSoNguyen += so;
	}
	printf_s("Tong cac so vua nhap la %d", tongSoNguyen);
}

int main()
{
	bai7();
}