#include <stdio.h>

void bai1();
void bai2(int arrNguyen[100], int soLuong);
void bai3();
void testThu();

int main() {
	/*Sử dụng SwitchCase và Vòng lặp menu gồm 3 bài*/
	int choice, arrNguyen[100], n;
	do
	{
		printf_s("\nMenu\n");
		printf_s("1. Nhap thong tin con meo\n");
		printf_s("2. Tim vi tri so nguyen chan trong mang\n");
		printf_s("3. Nhap vao nam sinh\n");
		printf_s("4. Thoat chuong trinh\n");
		printf_s("Lua chon cua ban: ");
		scanf_s("%d", &choice);
		getchar();
		switch (choice)
		{
		case 1:
			bai1();
			printf_s("\nBan se duoc tro lai menu.");
			break;
		case 2:
			printf_s("Ban muon nhap vao bao nhieu so nguyen: ");
			scanf_s("%d", &n);
			bai2(arrNguyen, n);
			printf_s("\nBan se duoc tro lai menu.");
			break;
		case 3:
			bai3();
			printf_s("\nBan se duoc tro lai menu.");
			break;
		case 4:
			printf_s("\nAn nut bat ki de thoat chuong trinh.");
			return;
			break;
		case 5:
			testThu();
			break;
		default:
			break;
		}
	} while (1);
}

void bai1() {
	/*Bài 1 : Nhập thông tin con mèo gồm thông tin sau : Tên, Cân Nặng, Năm Sinh.Sau đó  in ra các thông tin đã  nhập vào bào gồm tuổi.Nếu cân nặng lớn hơn 10kg thì ghi thêm con mèo ú.*/
	char ten[100];
	int namSinh;
	double canNang;
	printf_s("Hay nhap vao ten cua meo: ");
	gets_s(ten, 100);
	printf_s("Hay nhap vao can nang cua con meo: ");
	scanf_s("%lf", &canNang);
	printf_s("Hay nhap vao nam sinh cua con meo: ");
	scanf_s("%d", &namSinh);
	printf_s("Thong tin con meo ban vua nhap la:\n");
	printf_s("Ten: %s\n", ten);
	printf_s("Can nang: %0.1lf\n", canNang);
	printf_s("Nam sinh: %d\n", namSinh);
	printf_s("Tuoi: %d\n", 2021 - namSinh);
	if (canNang > 10)
	{
		printf_s("Day la mot con meo u!\n");
	}
}

void bai2(int arrNguyen[100], int soLuong) {
	/*Bài 2 : Nhập một dãy các số nguyên vào tìm ra vị trí các số chẵn trong dãy và các vị trí đó ra màn hình.*/
	for (int i = 0; i < soLuong; i++)
	{
		printf_s("Hay nhap so vao index [%d]: ", i);
		scanf_s("%d", &arrNguyen[i]);
	}
	printf_s("Cac so chan ma ban vua nhap nam o cac index sau: \n");
	for (int i = 0; i < soLuong; i++)
	{
		if (arrNguyen[i] % 2 == 0)
		{
			printf_s("[%d]", i);
		}
	}
}

void bai3() {
	/*Bài 3 : Nhập một dãy số các năm sinh vào sau đó in ra những năm sinh trên 20 tuổi*/
	int arrNamSinh[100], soLuong, count = 0;
	printf_s("Ban muon nhap vao bao nhieu nam sinh: ");
	scanf_s("%d", &soLuong);
	for (int i = 0; i < soLuong; i++)
	{
		printf_s("Hay nhap vao nam sinh thu %d: ", i + 1);
		scanf_s("%d", &arrNamSinh[i]);
		if (checkTuoi(arrNamSinh[i]) >= 20)
		{
			count++;
		}
	}
	if (count != 0)
	{
		printf_s("Ban da nhap vao %d nam sinh tren 20 tuoi, do la cac nam: ", count);
		for (int i = 0; i < soLuong; i++)
		{
			if (checkTuoi(arrNamSinh[i]) >= 20)
			{
				printf_s("%d ", arrNamSinh[i]);
			}
		}
	}
	else
	{
		printf_s("Ban da khong nhap vao nam sinh nao tren 20 tuoi");
	}
}

int checkTuoi(int namSinh) {
	int tuoi = 2021 - namSinh;
	return tuoi;
}

void testThu() {
	int arrNamSinh[100], soLuong, count = 0;
	printf_s("Ban muon nhap vao bao nhieu nam sinh: ");
	scanf_s("%d", &soLuong);
	for (int i = 0; i < soLuong; i++)
	{
		printf_s("Hay nhap vao nam sinh thu %d: ", i + 1);
		scanf_s("%d", &arrNamSinh[i]);
	}
	printf_s("Tuoi cua cac nam sinh ban vua nhap la: ");
	for (int i = 0; i < soLuong; i++)
	{
		printf_s("%d ", checkTuoi(arrNamSinh[i]));
	}
}