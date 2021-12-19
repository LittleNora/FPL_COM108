#include <stdio.h>


void bai1();
void nhapXuatSoNguyen(int arrNguyen[100], int soLuong);
void bai3();

int main() {
	/*Có SwitchCase và Vòng lặp menu*/
	int choice;
	do
	{
		printf_s("Menu LAB 3,4\n");
		printf_s("1. Nhap thong tin nguoi yeu mong muon trong tuong lai.\n");
		printf_s("2. Nhap day so nguyen\n");
		printf_s("3. Nhap chieu cao\n");
		printf_s("4. Thoat chuong trinh\n");
		printf_s("Lua chon cua ban: ");
		scanf_s("%d", &choice);
		getchar();
		switch (choice)
		{
		case 1:
			printf_s("Chuong trinh nhap thong tin nguoi yeu tuong lai\n");
			bai1();
			printf_s("\nBan se duoc tro lai menu!\n");
			break;
		case 2:
			printf_s("Chuong trinh nhap mang so nguyen\n");
			int soLuong, arrNguyen[100];
			printf_s("Hay nhap vao so luong so nguyen ban muon nhap: ");
			scanf_s("%d", &soLuong);
			nhapXuatSoNguyen(arrNguyen, soLuong);
			printf_s("\nBan se duoc tro lai menu!\n");
			break;
		case 3:
			printf_s("Chuong trinh nhap mang chieu cao\n");
			bai3();
			printf_s("\nBan se duoc tro lai menu!\n");
			break;
		case 4:
			printf_s("An nut bat ki de thoat chuong trinh.");
			return;
			break;
		default:
			printf_s("Lua chon cua ban khong hop le.");
			printf_s("\nBan se duoc tro lai menu!\n");
			break;
		}
	} while (1);
}

void bai1() {
	/*Bài 1 : Nhập thông tin người yêu mong muốn trong tương lai các thông tin sau : Tên, Chiều Cao, Cân Nặng, Năm Sinh, Trình độ học vấn.Sau đó in ra thông tin bao gồm cả tuổi.*/
	char ten[100], trinhDo[100];
	int chieuCao, canNang, namSinh;
	printf_s("Hay nhap vao ten nguoi yeu mong muon cua ban: ");
	gets_s(ten, 100);
	printf_s("Hay nhap vao chieu cao nguoi yeu mong muon cua ban(cm): ");
	scanf_s("%d", &chieuCao);
	printf_s("Hay nhap vao can nang nguoi yeu mong muon cua ban(kg): ");
	scanf_s("%d", &canNang);
	printf_s("Hay nhap vao nam sinh nguoi yeu mong muon cua ban: ");
	scanf_s("%d", &namSinh);
	getchar();
	printf_s("Hay nhap vao trinh do hoc van nguoi yeu mong muon cua ban: ");
	gets_s(trinhDo, 100);
	printf_s("Thong tin nguoi yeu mong muon trong tuong lai cua ban la:\n");
	printf_s("Ten: %s\n", ten);
	printf_s("Chieu cao: %d cm\n", chieuCao);
	printf_s("Can nang: %d kg\n", canNang);
	printf_s("Nam sinh: %d\n", namSinh);
	printf_s("Tuoi: %d\n", 2021 - namSinh);
	printf_s("Trinh do hoc van: %s", trinhDo);

}

void nhapXuatSoNguyen(int arrNguyen[100], int soLuong) {
	/*Bài 2 : Nhập một dãy số nguyên sau đó in dãy số đó ra màn hình và thêm số lượng dãy số đó ra màn hình.*/
	for (int i = 0; i < soLuong; i++)
	{
		printf_s("Hay nhap vao so nguyen thu %d: ", i + 1);
		scanf_s("%d", &arrNguyen[i]);
	}
	printf_s("Ban da nhap vao mang %d so nguyen, do la cac so: ", soLuong);
	for (int i = 0; i < soLuong; i++)
	{
		printf_s("%d ", arrNguyen[i]);
	}
}

void bai3() {
	/*Bài 3 : Nhập một mảng chiều cao hãy in ra số lượng các chiều cao từ 1m70 trở lên.*/
	int arrChieuCao[100], n, count = 0;
	printf_s("Ban muon nhap bao nhieu chieu cao: ");
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		printf_s("Hay nhap vao chieu cao thu %d(cm): ", i + 1);
		scanf_s("%d", &arrChieuCao[i]);
		if (arrChieuCao[i] >= 170)
		{
			count++;
		}
	}
	if (count != 0)
	{
		printf_s("Ban da nhap vao %d chieu cao lon hon 170cm, do la: ", count);
		for (int i = 0; i < n; i++)
		{
			if (arrChieuCao[i] >= 170)
			{
				printf_s("%dcm  ", arrChieuCao[i]);
			}
		}
	}
	else
	{
		printf_s("Ban da khong nhap vao chieu cao nao lon hon 170cm.");
	}
}