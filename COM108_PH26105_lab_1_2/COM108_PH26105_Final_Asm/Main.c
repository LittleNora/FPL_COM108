#include <stdio.h>

//Hàm có tham số truyền vào
void nhapMang(int arr[], int n);
void inMang(int arr[], int n);
void sapXepMang(int arrNguyen[], int n);
double nhapDiem(double diem, char loaiDiem[]);
void nhap10So(int arr[10]);

//Hàm từng bài
void bai1();
void bai2();
void bai3();
void bai4();
void bai5();
void bai6();
void bai7();


int main()
{
	int choice;
	do
	{
		printf_s("\n-----Menu-------------------\n");
		printf_s("1. Thong tin sinh vien\n");
		printf_s("2. Thong tin san pham\n");
		printf_s("3. Cong tong cac so nguyen\n");
		printf_s("4. Cong tong cac index le\n");
		printf_s("5. Nhap khoang tu 1 den 10\n");
		printf_s("6. Sap xep mang theo thu tu giam dan\n");
		printf_s("7. Xep loai hoc luc\n");
		printf_s("8. Thoat chuong trinh\n");
		printf_s("Lua chon cua ban la: ");
		scanf_s("%d", &choice);
		getchar();
		switch (choice)
		{
		case 1:
			bai1();
			printf_s("\nBan se duoc quay tro lai menu.\n");
			break;
		case 2:
			bai2();
			printf_s("\nBan se duoc quay tro lai menu.\n");
			break;
		case 3:
			bai3();
			printf_s("\nBan se duoc quay tro lai menu.\n");
			break;
		case 4:
			bai4();
			printf_s("\nBan se duoc quay tro lai menu.\n");
			break;
		case 5:
			bai5();
			printf_s("\nBan se duoc quay tro lai menu.\n");
			break;
		case 6:
			bai6();
			printf_s("\nBan se duoc quay tro lai menu.\n");
			break;
		case 7:
			bai7();
			printf_s("\nBan se duoc quay tro lai menu.\n");
			break;
		case 8:
			printf_s("\nBan da chon thoat chuong trinh.");
			printf_s("\nAn vao nut bat ki tren ban phim de thoat chuong trinh.\n");
			return;
			break;
		default:
			printf_s("Lua chon cua ban khong hop le. Ban se duoc quay tro lai menu.\n");
			break;
		}
	} while (1);
}

void bai1() {
	/*Bài 1: Mời người dùng nhập vào thông tin cá nhân gồm các thông tin sau : Mã Sinh Viên, Tên, Năm Sinh, Điểm Môn C.Sau đó in ra như sau : <MSV> <Tên> <Năm Sinh> <Tuổi><Điểm>*/
	char maSinhVien[100], tenSinhVien[100];
	int namSinh;
	double diemC;
	printf_s("Hay nhap vao ma sinh vien: ");
	gets_s(maSinhVien, 100);
	printf_s("Hay nhap vao ten sinh vien: ");
	gets_s(tenSinhVien, 100);
	printf_s("Hay nhap vao nam sinh cua sinh vien: ");
	scanf_s("%d", &namSinh);
	do
	{
		printf_s("Hay nhap vao diem mon C cua sinh vien: ");
		scanf_s("%lf", &diemC);
		if (diemC < 0 || diemC > 10)//Điểm không hợp lệ thì nhập lại
		{
			printf_s("\nDiem ban vua nhap khong hop le, vui long nhap lai.\n");
		}
	} while (diemC < 0 || diemC > 10);
	printf_s("\nThong tin cua sinh vien:\n");
	printf_s("Ma sinh vien: %s | Ten: %s | Nam sinh: %d | Tuoi: %d | Diem C: %0.1lf\n", maSinhVien, tenSinhVien, namSinh, 2021 - namSinh, diemC);
}

void bai2() {
	/*Bài 2: Mời người dùng nhập vào thông tin sản phẩm gồm các thông tin sau : <Tên sản phẩm> <Trọng lượng>.Sau đó in ra như sau : <Tên sp> <Trọng lượng> +<Xếp loại> (Nếu sản phẩm trên 10kg thì Xếp loại NẶNG, Ngược lại thì NHẸ).*/
	char tenSanPham[100];
	double trongLuong;
	printf_s("Moi ban nhap vao ten san pham: ");
	gets_s(tenSanPham, 100);
	do
	{
		printf_s("Hay nhap vao trong luong cua san pham(kg): ");
		scanf_s("%lf", &trongLuong);
		if (trongLuong <= 0)//Trọng lượng <=0 thì nhập lại
		{
			printf_s("\nTrong luong ban nhap khong hop le! Vui long nhap lai.\n");
		}
	} while (trongLuong <= 0);
	printf_s("\nThong tin san pham ban vua nhap:\n");
	printf_s("Ten san pham : %s | Trong luong: %0.1lf | Xep loai: ", tenSanPham, trongLuong);
	if (trongLuong > 10) {
		printf_s("Nang\n");
	}
	else {
		printf_s("Nhe\n");
	}
}

void bai3()
{
	/*Bài 3: Cho người dùng nhập vào 1 mảng các số nguyên sau đó in tất cả các số đó ra và cộng tổng các số đó*/
	int arrNguyen[100], tongMang = 0, soLuong;
	printf_s("Ban muon nhap vao mang bao nhieu so nguyen?: ");
	scanf_s("%d", &soLuong);
	for (int i = 0; i < soLuong; i++)
	{
		printf_s("Hay nhap so nguyen index [%d]: ", i);
		scanf_s("%d", &arrNguyen[i]);
		tongMang += arrNguyen[i];
	}
	printf_s("\nMang so nguyen ban vua nhap bao gom cac so sau: ");
	inMang(arrNguyen, soLuong);//Truyền vào hàm inMang mảng arrNguyen và tham số soLuong
	printf_s("\nTong cua cac so nguyen ban vua nhap vao mang la %d", tongMang);
}

void bai4()
{
	/*Cho người dùng nhập vào 1 mảng số nguyên sau đó cộng tổng tất cả các Index lẻ lại với nhau và in ra màn hình các Index lẻ đó*/
	int arrNguyen[100], tongMangLe = 0, soLuong;
	printf_s("Ban muon nhap vao mang bao nhieu so nguyen?: ");
	scanf_s("%d", &soLuong);
	for (int i = 0; i < soLuong; i++)
	{
		printf_s("Hay nhap so nguyen index [%d]: ", i);
		scanf_s("%d", &arrNguyen[i]);
		if (arrNguyen[i] % 2 != 0)//Nếu là số lẻ thì cộng vào tổng
		{
			tongMangLe += arrNguyen[i];
		}

	}
	printf_s("\nCac so le trong mang so nguyen ban da nhap la: ");//In ra các số lẻ của mảng
	for (int i = 0; i < soLuong; i++)
	{
		if (arrNguyen[i] % 2 != 0)
		{
			printf_s("%d ", arrNguyen[i]);
		}
	}
	printf_s("\nTong cua cac so nguyen le ban vua nhap vao mang la %d", tongMangLe);
}

//void bai5() {
//	int soNhapVao;//
//	for (int i = 1; i <= 10; i++)
//	{
//		do
//		{
//			printf_s("Hay nhap vao so %d: ", i);
//			scanf_s("%d", &soNhapVao);
//			if (soNhapVao != i)
//			{
//				printf_s("\nBan da nhap khong dung yeu cau, hay nhap lai.\n");
//			}
//		} while (soNhapVao != i);
//	}
//	printf_s("Chuc mung, ban da nhap dung, cac so ban da nhap la: ");
//	for (int i = 1; i <= 10; i++)
//	{
//		printf_s("%d ", i);
//	}
//}

void bai5() {
	/*Yêu cầu người dùng nhập từ 1 đến 10 nếu người dùng không nhập đúng bắt người dùng nhập lại.Còn nếu đúng thì in ra màn hình – Bạn đã lựa chọn đúng*/
	int arrSoNhapVao[10], count = 0;//Bộ đếm = 0 để duyệt mảng
	nhap10So(arrSoNhapVao);
	for (int i = 0; i < 10; i++)//Duyệt từng thành phần của mảng
	{
		if (arrSoNhapVao[i] != (i + 1)) {//Nếu số không khớp thì sẽ +1 vào bộ đếm
			count++;
		}
	}
	if (count != 0)//Bộ đếm khác 0 thì là nhập sai 1 trong 10 số
	{
		printf_s("Ban da nhap khong dung %d so. Hay nhap lai tu 1 den 10.\n", count);
		bai5();//Chạy lại hàm bài 5
	}
	else//Bộ đếm = 0 là nhập đúng
	{
		printf_s("\nChuc mung. Ban da nhap dung.\n\n");
		printf_s("Day so ban vua nhap la: ");
		for (int i = 1; i <= 10; i++)
		{
			printf_s("%d ", i);
		}
	}
}

void bai6() {
	/*Cho người dùng nhập vào mảng số nguyên sau đó in ra mảng người dùng nhập vào sau đó in tiếp mảng sau khi đã sắp xếp từ lớn đến bé*/
	int arrNguyen[100], n;
	printf_s("Ban muon nhap bao nhieu so nguyen: ");
	scanf_s("%d", &n);
	nhapMang(arrNguyen, n);
	printf_s("Cac so ban vua nhap vao la: ");
	inMang(arrNguyen, n);
	printf_s("\n");
	sapXepMang(arrNguyen, n);
	printf_s("Mang sau khi sap xep theo thu tu giam dan la: ");
	inMang(arrNguyen, n);
	printf_s("\n");
}

void bai7() {
	/*Yêu cầu người dùng nhập điểm 3 đầu điểm môn C như sau : Điểm Thi, Điểm Thành Phần, Điểm Ý Thức.Sau đó tính trung bình 3 đầu điểm đó và đưa ra xếp hạng*/
	double diemThi = 0, diemThanhPhan = 0, diemYThuc = 0, diemTb;
	diemThi = nhapDiem(diemThi, "diem thi");//Tiến hành nhập điểm thi rồi gán lại về biến diemThi ban đầu
	diemThanhPhan = nhapDiem(diemThanhPhan, "diem thanh phan");//Điểm thành phần
	diemYThuc = nhapDiem(diemYThuc, "diem y thuc");//Điểm ý thức
	printf_s("\n");
	diemTb = (diemThi + diemThanhPhan + diemYThuc) / 3;
	printf_s("Diem trung binh cua ban la %0.1lf\n", diemTb);
	if (diemTb >= 9 && diemTb <= 10) {
		printf_s("Ban la ong vang!\n");
	}
	else if (diemTb >= 8 && diemTb < 10) {
		printf_s("Ban la ong tho!\n");
	}
	else
	{
		printf_s("Ban khong dat danh hieu nao!\n");
	}
}

void nhap10So(int arr[10]) {
	for (int i = 0; i < 10; i++)
	{
		printf_s("Hay nhap vao so %d: ", i + 1);
		scanf_s("%d", &arr[i]);
	}
}

double nhapDiem(double diem, char loaiDiem[]) {
	do
	{
		printf_s("Hay nhap vao %s cua ban: ", loaiDiem);
		scanf_s("%lf", &diem);
		if (diem < 0 || diem > 10)//Điểm không hợp lệ thì nhập lại
		{
			printf_s("\nDiem ban nhap khong hop le. Hay nhap lai!\n\n");
		}
	} while (diem < 0 || diem > 10);
	return diem;//Trả về điểm tương ứng với tham số truyền vào
}

void nhapMang(int arr[], int n)//Tham số n ứng với số phần tử muốn nhập vào mảng
{
	for (int i = 0; i < n; i++)
	{
		printf_s("Hay nhap vao Index [%d]: ", i);
		scanf_s("%d", &arr[i]);
	}
}

void inMang(int arr[], int n)//Tham số n ứng với số phần tử muốn in ra
{
	for (int i = 0; i < n; i++)
	{
		printf_s("%d ", arr[i]);
	}
}

void sapXepMang(int arrNguyen[], int n) {//Tham số n ứng với số phần tử của mảng
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arrNguyen[i] < arrNguyen[j])
			{
				int temp = arrNguyen[i];//Tạo biến trung gian temp
				arrNguyen[i] = arrNguyen[j];
				arrNguyen[j] = temp;
			}
		}
	}
}