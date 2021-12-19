#include <stdio.h>


void bai1();
void bai2();
void bai3();
void sapXepMang(int arrNguyen[10]);
double trongLuongTrungBinh(double arrLaptop[100], int soLuongLaptop);
int indexMax(double arrLaptop[100], int soLuongLaptop);

int main() {
	/*Xây dựng file chứa hàm Main.
		Xây dựng Menu tổ chức chương trình bao gồm các bài sau.
		Menu in ra như sau(sự lựa chọn được lặp lại đến khi chọn 0) :
		+ --------------------------Menu------------------------ +
		1. Thông tin sinh viên
		2. Bài 2
		3. Thông tin laptop
		0.Thoát
		+ -------------------------------------------------------- +
		Mời chọn :
	*/
	int choice;
	do
	{
		printf_s("\n+ --------------------------Menu------------------------ +\n");
		printf_s("1. Thong tin sinh vien\n");
		printf_s("2. Bai 2\n");
		printf_s("3. Thong tin laptop\n");
		printf_s("0.Thoat\n");
		printf_s("+ -------------------------------------------------------- +\n");
		printf_s("Moi chon: ");
		scanf_s("%d", &choice);
		getchar();
		switch (choice)
		{
		case 1:
			bai1();
			break;
		case 2:
			bai2();
			break;
		case 3:
			bai3();
			break;
		case 0:
			printf_s("An phim bat ki de thoat!");
			return;
			break;
		default:
			break;
		}
	} while (1);
}

void bai1() {
	//Bài 1 : Nhập vào Tên, Mã Số SV, Điểm C.In ra tất cả thông tin vừa nhập.
	char tenSinhVien[100], maSinhVien[100];
	double diemC;
	printf_s("Hay nhap vao ten sinh vien: ");
	gets_s(tenSinhVien, 100);
	printf_s("Hay nhap vao ma sinh vien: ");
	gets_s(maSinhVien, 100);
	printf_s("Hay nhap vao diem thi mon C: ");
	scanf_s("%lf", &diemC);
	printf_s("Thong tin sinh vien ban vua nhap la:\n");
	printf_s("Ten sinh vien: %s\n", tenSinhVien);
	printf_s("Ma sinh vien: %s\n", maSinhVien);
	printf_s("Diem mon C: %0.1lf\n", diemC);
}

void bai2() {
	/*Bài 2 : Viết chương trình nhập 10 số bất kỳ từ bàn phím.
	Sắp xếp dãy số đó bằng thuật toán nổi bọt sau đó in ra.*/
	int arrNguyen[10];
	for (int i = 0; i < 10; i++)
	{
		printf_s("Hay nhap vao so thu %d: ", i + 1);
		scanf_s("%d", &arrNguyen[i]);
	}
	sapXepMang(arrNguyen);
}

void sapXepMang(int arrNguyen[10]) {
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (arrNguyen[i] < arrNguyen[j])
			{
				int temp = arrNguyen[i];
				arrNguyen[i] = arrNguyen[j];
				arrNguyen[j] = temp;
			}
		}
	}
	printf_s("Cac so ban vua nhap vao mang theo thu tu tang dan la: ");
	for (int i = 0; i < 10; i++)
	{
		printf_s("%d ", arrNguyen[i]);
	}
}

void bai3() {
	/*Bài 3 : Xây dựng chương trình như sau :
	+--------Thông tin Laptop  cửa hàng------ - +
	Mời nhập số lượng laptop :
	Nhập mảng trọng lượng cho từng laptop : ….
	+ ------Xuất thông tin Laptop------ +
	Số lượng Laptop là : ……
	Kích cỡ trung bình laptop : ……
	Vị trí Ti vi có kích cỡ lớn nhất là : …..*/
	int soLuongLaptop;
	double arrLaptop[100];
	printf_s("Thong tin Laptop\n");
	printf_s("Hay nhap vao so luong laptop: ");
	scanf_s("%d", &soLuongLaptop);
	for (int i = 0; i < soLuongLaptop; i++)
	{
		printf_s("Hay nhap vao trong luong cua laptop thu %d: ", i + 1);
		scanf_s("%lf", &arrLaptop[i]);
	}
	printf_s("Thong tin laptop:\n");
	printf_s("So luong laptop la: %d\n", soLuongLaptop);
	printf_s("Trong luong trung binh laptop la: %0.1lf\n", trongLuongTrungBinh(arrLaptop, soLuongLaptop));
	printf_s("Laptop co trong luong lon nhat nam o index [%d]", indexMax(arrLaptop, soLuongLaptop));
}

double trongLuongTrungBinh(double arrLaptop[100], int soLuongLaptop) {
	double sum = 0;
	for (int i = 0; i < soLuongLaptop; i++)
	{
		sum += arrLaptop[i];
	}
	return sum / soLuongLaptop;
}

int indexMax(double arrLaptop[100], int soLuongLaptop) {
	int index;
	double max = arrLaptop[0];
	for (int i = 1; i < soLuongLaptop; i++)
	{
		if (arrLaptop[i] > max)
		{
			max = arrLaptop[i];
			index = i;
		}
	}
	return index;
}