
#include <stdio.h>
int main()
{
	int choice;
	do
	{
		printf_s("++++++++Menu+++++ \n");
		printf_s("1.Thong tin sinh vien \n");
		printf_s("2.Thong tin san pham \n");
		printf_s("3.Cong tong cac so \n");
		printf_s("4.Cong tong cac index le \n");
		printf_s("5.Nhap khoang tu 1 den 10 \n");
		printf_s("6.Sap xep tu be den lon \n");
		printf_s("7.Xep loai hoc luc \n");
		printf_s("8.Thoat \n");
		printf_s("Moi ban chon chuc nang: \n");
		scanf_s("%d", &choice);
		getchar();
		switch (choice)
		{
		case 1:
			printf_s("Bai 1 \n");
			int Msv;
			char ten[100];
			int namsinh;
			double diemthiC;
			printf_s("Moi ban nhap ma sinh vien \n");
			scanf_s("%d", &Msv);
			getchar();
			printf_s("Moi ban nhap ten : \n");
			gets_s(ten, 100);
			printf_s("Moi ban nhap nam sinh: \n");
			scanf_s("%d", &namsinh);
			printf_s("Moi ban nhap diem mon C : \n");
			scanf_s("%lf", &diemthiC);
			printf_s("Msv : %d | Ten : %s | Namsinh : %d | Tuoi : %d | DienthiC : %.1lf", Msv, ten, namsinh, 2021 - namsinh, diemthiC);
			break;
		case 2:
			printf_s("Bai 2 \n");
			char tensp[100];
			double cannangsp;
			printf_s("Moi ban nhap ten sp \n");
			gets_s(tensp, 100);
			printf_s("Moi ban nhap can nang san pham : \n");
			scanf_s("%lf", &cannangsp);
			printf_s("Ten san pham : %s | Can nang : %.1lf ", tensp, cannangsp);
			if (cannangsp > 10)
			{
				printf_s("Nang");
			}
			else
			{
				printf_s("Nhe");
			}
			break;
		case 3:
			printf_s("Bai 3 \n");
			int dayso[100];
			int soluongdayso;
			int tongcacdayso = 0;
			printf_s("Moi ban nhap so luong day so : \n");
			scanf_s("%d", &soluongdayso);
			for (int i = 0; i < soluongdayso; i++)
			{
				printf_s("Moi ban nhap Index %d : \n", i);
				scanf_s("%d", &dayso[i]);
				tongcacdayso += dayso[i];
			}
			printf_s("Tong cac day so la : %d", tongcacdayso);
			break;
		case 4:
			printf_s("Bai 4 \n");
			int arrNumbers[100];
			int soluong;
			int tong = 0;
			printf_s("Moi ban nhap so luong \n");
			scanf_s("%d", &soluong);
			for (int i = 0; i < soluong; i++)
			{
				printf_s("Moi ban nhap vao Index %d : \n", i);
				scanf_s("%d", &arrNumbers[i]);
			}
			printf_s("Cac Index le la : \n");
			for (int i = 0; i < soluong; i++)
			{
				if (arrNumbers[i] % 2 != 0)
				{
					printf_s("%d", arrNumbers[i]);
					tong += arrNumbers[i];
				}
			}
			printf_s("Tong cac so le : %d", tong);
			break;
		case 5:
			break;
		case 6:
			printf_s("Bai 6 \n");
			int mangsonguyen[100];
			int soluongsonguyen;
			printf_s("Moi ban nhap so luong so nguyen : \n");
			scanf_s("%d", &soluongsonguyen);
			for (int i = 0; i < soluongsonguyen; i++)
			{
				printf_s(" Index %d : \n", i);
				scanf_s("%d", &mangsonguyen[i]);
			}
			printf_s("Mang sau khi sap xep \n");
			for (int i = 0; i < soluongsonguyen - 1; i++)
			{
				for (int j = 0; j < soluongsonguyen; j++)
				{
					if (mangsonguyen[i] > mangsonguyen[j])
					{
						int temp = mangsonguyen[i];
						mangsonguyen[i] = mangsonguyen[j];
						temp = mangsonguyen[j];
					}
				}
				printf_s("%d", mangsonguyen[i]);
			}
			break;
		case 7:
			/*printf_s("Bai 7 \n");
			double diemthi[100];
			double diemTH[100];
			double diemythuc[100];
			int soluongdiem;
			printf_s("Nhap so luong diem \n");
			scanf_s("%d", &soluongdiem);
			for (int i = 0; i < soluongdiem; i++)
			{
				printf_s("Diem thi : \n", i);
				scanf_s("%.lf", &diemthi[i]);
			}
			for (int i = 0; i < soluongdiem; i++)
			{
				printf_s("Diem Thuc hanh : \n", i);
				scanf_s("%.1lf", &diemTH[i]);
			}
			for (int i = 0; i < soluongdiem; i++)
			{
				printf_s("Diem y thuc : \n", i);
				scanf_s("%.1lf", &diemythuc[i]);
			}
			double diemtb = (diemthi + diemTH + diemythuc) / 3;
			printf_s("Diem tb la : %.1lf \n", diemtb);*/
			break;
		case 8:
			printf_s("Hen gap lai");
			return;
			break;
		default:
			printf_s("Chuc nang khong ton tai \n");
			break;
		}
	} while (1);
}