#include <stdio.h>

void bai3();

int main()
{
	//Bài 1: Nhập thông tin con mèo gồm thông tin sau: Tên, Cân Nặng, Năm Sinh. Sau đó  in ra các thông tin đã  nhập vào bào gồm tuổi. Nếu cân nặng lớn hơn 10kg thì ghi thêm con mèo ú.

	//Bài 2:  Nhập một dãy các số nguyên vào tìm ra vị trí các số lẻ trong dãy và các vị trí đó ra màn hình.

		//Bài 3 : Nhập một dãy số các năm sinh vào sau đó in ra những năm sinh trên 20 tuổi.Và năm sinh có tuổi cao nhất.
	int choice;
	do
	{
		printf_s("-----Menu----- \n");
		printf_s("1.Bài 1 \n");
		printf_s("2.Bài 2 \n");
		printf_s("3.Bài 3 \n");
		printf_s("Moi ban chon chuc nang: \n");
		scanf_s("%d", &choice);
		switch (choice)
		{
		case 1:
			getchar();
			printf_s("Chao mung ban den voi bai 1: \n");
			char ten[100];
			double cannang;
			int namsinh;
			int tuoi;
			printf_s("Moi ban nhap ten : \n");
			gets_s(ten, 100);
			printf_s("Moi ban nhap can nang : \n");
			scanf_s("%.1lf", &cannang);
			printf_s("Moi ban nhap nam sinh : \n");
			scanf_s("%d", &namsinh);
			printf_s("Ten : %s | Can nang : %.1lf | Nam sinh : %d | Tuoi : %d", ten, cannang, namsinh, 2021 - namsinh);
			if (cannang > 10)
			{
				printf_s("Con Meo U");
			}
			break;
		case 2:
			printf_s("Chao mung ban den voi bai 2: \n");
			int dayso[100];
			int soluongdayso;
			printf_s("Moi ban nhap so luong day so: \n");
			scanf_s("%d", &soluongdayso);
			for (int i = 0; i < soluongdayso; i++)
			{
				printf_s("Moi ban nhap vao Index %d : \n", i);
				scanf_s("%d", &dayso[i]);
			}
			printf_s("Vi tri cac so le la : \n");
			for (int i = 0; i < soluongdayso; i++)
			{
				if (dayso[i] % 2 != 0)
				{
					printf_s("%d", dayso[i]);
				}
			}
			break;
		case 3:
			bai3();
			break;
		default:
			printf_s("Chuc nang ban chon khong ton tai");
			break;
		}
	} while (1);
}

void bai3() {
	//Nhập vào một dãy số các năm sinh vào sau đó in ra những năm sinh trên 20 tuổi và năm sinh có tuổi cao nhât
	int arrNamSinh[100], soLuong, namSinhTuoiCaoNhat;
	printf_s("Hay nhap vao so luong nam sinh muon nhap: ");
	scanf_s("%d", &soLuong);
	for (int i = 0; i < soLuong; i++)
	{
		printf_s("Hay nhap vao nam sinh thu %d: ", i + 1);
		scanf_s("%d", &arrNamSinh[i]);
	}
	namSinhTuoiCaoNhat = arrNamSinh[0];
	printf_s("Cac nam sinh tren 20 tuoi la: ");
	for (int i = 0; i < soLuong; i++)
	{
		if (2021 - arrNamSinh[i] > 20)
		{
			printf_s("%d ", arrNamSinh[i]);
		}
		if (namSinhTuoiCaoNhat > arrNamSinh[i])
		{
			namSinhTuoiCaoNhat = arrNamSinh[i];
		}
	}
	printf_s("\nNam sinh co tuoi cao nhat la: %d", namSinhTuoiCaoNhat);
}