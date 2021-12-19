#include <stdio.h>

int main()
{
	/*int a;
	a = 5;
	printf_s("%d", a);*/

	/*
	*Bài 1: Viết 1 chương trình khai báo 3 năm sinh
		* sau đó in 3 năm sinh ra màn hình theo công thức sau :
		* Nam Sinh 1 : 1999
		* Nam Sinh 2 : 2000
		* Nam Sinh 3 : 2001
	*/
	int namSinh1 = 1999, namSinh2 = 2000, namSinh3 = 2001;
	printf_s("Bai 1:\n");
	printf_s("Nam Sinh 1: %d\n", namSinh1);
	printf_s("Nam Sinh 2: %d\n", namSinh2);
	printf_s("Nam Sinh 3: %d\n", namSinh3);
	printf_s("\n\n");

	/*
	Bài 2: Viết 1 chương trình in điểm môn C ra màn hình
		* theo công thức sau
		* Diem C cua ban la : 8.6
	*/
	double diemC = 8.6;
	printf_s("Bai 2:\n");
	printf_s("Diem C cua ban la: %0.1lf\n", diemC);
	printf_s("\n\n");

	//Bài 3: Viết 1 chương trình in 1 ký tự bất kì ra màn hình
	char kyTuBatKi = '+';
	printf("Bai 3:\n");
	printf_s("%c", kyTuBatKi);
	printf_s("\n\n");

	/* Bài 4: Viết 1 chương trình in thông tin điểm các môn các bạn đã học,
	Điểm C, Điểm Kỹ Năng học tập, Điểm Tiếng anh sau đó in ra màn hình các đầu điểm đó.*/
	double diemTinHoc = 10, diemKyNang = 8.4, diemTiengAnh = 2.0;
	printf_s("Bai 4:\n");
	printf_s("Diem mon Tin Hoc: %0.1lf\n", diemTinHoc);
	printf_s("Diem mon Ky nang hoc tap: %0.1lf\n", diemKyNang);
	printf_s("Diem mon Tieng Anh: %0.1lf\n", diemTiengAnh);
	printf_s("\n\n");

	/* Bài 5: Viết 1 chương trình nhập vào 3 điểm JAVA1, CSharp1, Tiếng Anh
	in ra các đầu điểm và điểm trung bình.*/
	double diemJAVA1 = 10, diemCSharp1 = 9, diemTiengAnh1 = 8;
	double diemTrungBinh = (diemJAVA1 + diemCSharp1 + diemTiengAnh1) / 3;
	printf_s("Bai 5:\n");
	printf_s("Diem mon Java 1 cua ban la: %0.1lf\n", diemJAVA1);
	printf_s("Diem mon CSharp 1 cua ban la: %0.1lf\n", diemCSharp1);
	printf_s("Diem mon Tieng Anh 1 cua ban la: %0.1lf\n", diemTiengAnh1);
	printf_s("Diem trung binh 3 mon cua ban la: %0.2lf\n", diemTrungBinh);
	printf_s("\n\n");
}